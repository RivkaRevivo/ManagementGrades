#include <iostream>
#include <map>
#include "Student.hpp"
using namespace std;
namespace ariel{// MANAGEMENTGRADES_H_INCLUDED

class ManagementGrades{

private:
//map m<long, Student*>;
public:
ManagementGrades (){}
bool add(int,Student* S){return true;}
int size(){return 1;}
double av(int){return 1.0;}
double allav(){return 1.0;}
int range(int,int){return 1;}
void student_s(int){}

};
}
