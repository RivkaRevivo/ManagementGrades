/**
 * Demo file for the exercise on ManagementGrades
 *
 * @author
 * @since
 */

#include <iostream>
#include <sstream>
#include <stdexcept>
using std::cout, std::endl, std::boolalpha, std::istringstream;
#include "ManagementGrades.hpp"
#include "Student.hpp"
using namespace ariel;

int main() {
  try {
    Student st1 , st2;
    st1.insert(3,70);//In the third course, the score is 70
    cout << st1.getgrade(3)<< endl;// prints 70
    cout << st1.getsize() << endl;//prints 1
    cout << st1.getav() << endl; //prints 70
    st1.insert(4,80);//In the fourth course, the score is 80
    cout << st1.getgrade(4)<< endl;// prints 80
    cout << st1.getsize() << endl;//prints 2
    cout << st1.getav() << endl; //prints 75
    st1.insert(3,100);//In the third course, the score is 100
    st1.insert(5,50);//In the fifth course, the score is 50
    Student* pst1 = &st1;
    Student* pst2 = &st2;
    ManagementGrades cs;
    cout << cs.size()<< endl;//prints 0
    cout << cs.av(3)<< endl;//prints -1
    cout << cs.allav()<< endl;//prints -1
    cout << cs.range(20,78)<< endl;//prints 0
    cs.add(12345678 ,pst1);// pointer to student st1 and his ID 12345678
    cout << cs.size()<< endl;//prints 1
    cout << cs.av(3)<< endl;//prints 70
    cout << cs.allav()<< endl;//prints 75
    cout << cs.range(20,78)<< endl;//prints 1
    cs.student_s(12345678);//prints 75
    cs.add(12345679, pst2);
    cout << cs.size()<< endl;//prints 2
    cout << cs.av(3)<< endl;//prints 85
    cout << cs.allav()<< endl;//prints 75 (100+70+80+50)/4
    cout << cs.range(20,78)<< endl;//prints 2
    cs.student_s(12345679);//prints 75
  }
   catch (...) {
    cout << "Unexpected exception!" << endl;
  }
  return 100;
}
