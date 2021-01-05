#include "OtherUI.h"
#include "../dataaccess/DataAccess.h"
#include "../dataaccess/EmployeeData.h"
#include "../businessobject/Employee.h"
#include <string>
#include <iostream>

using namespace std;

void OtherUI::GetEmployeeBySupervised()
{
      DataAccess *dataAccess = new EmployeeData("employee_data.txt");

    string name;
    cout << "Enter Name suppervised: " << endl;

    cin >> name;

    cout << "List Employees supervised by" << name << " :" << endl;

    long ssn = 0;
    for (BaseObject *bo : dataAccess->GetAllData())
    {
        if (Employee*)bo->GetFName() == name)
        {
            ssn = e->GetSSN();
        }
    }

    if (ssn == 0)
    {
        cout << "name is wrong" << endl;
    }
    else
    {
        for (Employee e : employeeData.GetAllData())
        {
            if (e.GetSuperSSN == ssn)
            {
                cout << e.ToString();
            }
        }
    }
}