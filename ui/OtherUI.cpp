#include "OtherUI.h"
#include "../businessobject/Employee.h"
#include "../businessobject/Dependent.h"
#include "../businessobject/Project.h"
#include "../businessobject/WorkOn.h"
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
            for (BaseObject *bo : employeeData->GetAllData())
            {
                if (((Employee *)bo)->GetSuperSSN() == ssn)
                {
                    cout << ((Employee *)bo)->ToString() << endl;
                }
            }
        }
    }

    if (ssn == 0)
    {
        cout << "name is wrong" << endl;
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

void OtherUI::GetNameProjectAndTime()
{
    int pnum;
    cout << "Enter the Project Number:  ";
    cin >> pnum;
    float sumtime = 0;
    for (BaseObject *bo : projectData->GetAllData())
    {
        if ((((Project *)bo)->GetProjectNumber()) == pnum)
        {
            cout << "The project name is :" << ((Project *)bo)->GetProjectName() << endl;

            for (BaseObject *bo : workOnData->GetAllData())
            {
                if ((((WorkOn *)bo)->GetPNO()) == pnum)
                {
                    sumtime += ((WorkOn *)bo)->GetHours();
                }
            }
        }
    }
    cout << "The Sum time :" << sumtime << endl;
}

void OtherUI::GetEmployeeNoProject()
{
    for (BaseObject *bo : employeeData->GetAllData())
    {
        int temp = 0;
        for (BaseObject *bowo : workOnData->GetAllData())
        {
            if ((((Employee *)bo)->GetSSN()) == (((WorkOn *)bowo)->GetESSN()))
            {
                temp = 1;
            }
        }
        if (temp == 0)
        {
            cout << ((Employee *)bo)->GetFName() << " " << ((Employee *)bo)->GetMInit() << " " << ((Employee *)bo)->GetLName() << endl;
        }
    }
}