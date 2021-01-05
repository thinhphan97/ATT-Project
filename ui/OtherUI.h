#ifndef _Project_ui_OtherUI_h
#define _Project_ui_OtherUI_h

#include "../dataaccess/EmployeeData.h"
#include "../dataaccess/DependentData.h"

class OtherUI
{
    EmployeeData *employeeData = new EmployeeData("employee_data.txt");
    DependentData *dependentData = new DependentData("dependent_data.txt");

public:
    void GetEmployeeBySupervised();
    void GetEmployeeHaveSonOrDaughter();
};

#endif