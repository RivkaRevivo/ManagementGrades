#!make -f

all: demo
	./$<

demo: ManagementGradesDemo.o 
	clang++-5.0 -std=c++17 $^ -o demo

test:  ManagementGradesTest.o 
	clang++-5.0 -std=c++17 $^ -o test

%.o: %.cpp Student.hpp ManagementGrades.hpp
	clang++-5.0 -std=c++17 --compile $< -o $@

version:
	clang++-5.0 --version

clean:
	rm -f *.o demo test