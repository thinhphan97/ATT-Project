#include "OtherUI.h"
#include "../businessobject/Employee.h"
#include "../businessobject/Dependent.h"
#include <string>
#include <iostream>

using namespace std;

void OtherUI::GetEmployeeBySupervised()
{
    string name;
    cout << "Enter Name suppervised: " << endl;

    cin >> name;

    cout << "List Employees supervised by  " << name << " :" << endl;

    long ssn = 0;
    for (BaseObject *bo : employeeData->GetAllData())
    {
        if (((Employee *)bo)->GetLName() == name)
        {
            ssn = (((Employee *)bo)->GetSSN());
        }
    }

    if (ssn == 0)
    {
        cout << "name is wrong" << endl;
    }
    else
    {
        for (BaseObject *bo : employeeData->GetAllData())
        {
            if (((Employee *)bo)->GetSuperSSN() == ssn)
            {
                cout << ((Employee *)bo)->ToString() << endl;
            }
        }
    }
}

void OtherUI::GetEmployeeHaveSonOrDaughter()
{
    long ssn = 0;
    for (BaseObject *bo : dependentData->GetAllData())
    {
        if (((Dependent *)bo)->GetRelationship() == "SON" || ((Dependent *)bo)->GetRelationship() == "DAUGHTER")
        {
            ssn = ((Dependent *)bo)->GetESSN();
            cout << employeeData->GetEmployeeBySSN(ssn)->ToString() << endl;
        }
    }

    if (ssn == 0)
    {
        cout << "list is empty" << endl;
    }
}