
/**
 * A test program for STL .
 *
 * @author .
 * @since
 */


#include <iostream>
using namespace std;

#include "ManagementGrades.hpp"
#include "Student.hpp"
#include "badkan.hpp"
using namespace ariel;

int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {

		testcase.setname("STUDENT");
		 Student st1 , st2;
         	st1.insert(3,70);
		testcase.CHECK_EQUAL(st1.getgrade(3),70);
		testcase.CHECK_EQUAL(st1.getsize(),1);
		testcase.CHECK_EQUAL(st1.getav(),70);
		testcase.CHECK_EQUAL(st1.getgrade(3),70);
		st1.insert(4,80);
		testcase.CHECK_EQUAL(st1.getgrade(4),80);
		testcase.CHECK_EQUAL(st1.getsize(),2);
		testcase.CHECK_EQUAL(st1.getav(),75);
		testcase.CHECK_EQUAL(st1.getgrade(4),80);
		st1.insert(3,100);//In the third course, the score is 100
        st1.insert(5,50);//In the fifth course, the score is 50
        Student* pst1 = &st1;
        Student* pst2 = &st2;
        testcase.setname("ManagementGrades");
        ManagementGrades cs;
        testcase.CHECK_EQUAL(cs.size(),0);
		testcase.CHECK_EQUAL(cs.av(3),-1);
		testcase.CHECK_EQUAL(cs.allav(),-1);
		testcase.CHECK_EQUAL(cs.range(20,78),0);
		cs.add(12345678 ,pst1);
		testcase.CHECK_EQUAL(cs.size(),1);
		testcase.CHECK_EQUAL(cs.av(3),70);
		testcase.CHECK_EQUAL(cs.allav(),75);
		testcase.CHECK_EQUAL(cs.range(20,78),1);
		//CHECK_OUTPUT(cs.student_s(12345678), "75");
        cs.add(12345679, pst2);
        testcase.CHECK_EQUAL(cs.size(),2);
		testcase.CHECK_EQUAL(cs.av(3),85);
		testcase.CHECK_EQUAL(cs.allav(),75);
		testcase.CHECK_EQUAL(cs.range(20,78),2);
		//CHECK_OUTPUT(cs.student_s(12345679), "75")


		testcase.print();
    grade = testcase.grade();
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
  cout <<  grade << " " << "sdlghljwhtycdxfhb" << endl;
	return 0;
}
