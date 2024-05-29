#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"
#include "Teacher.h"
#include "Staff.h"
#include "Department.h"
using namespace std;

int main()
{
    Department department;
    Teacher teacher1("Zikun Xiong", 28, "Male", "1211 rue Drummond", "123@gmail.com", "Mathmatic", "PHD", "full time");
    Staff staff1("Nichita", 66, "Male", "2212 rue Danke", "321@gmail", "Accountant", 40);

    department.addPerson(&teacher1);
    department.addPerson(&staff1);

    department.displayAll();


    return 0;
}
