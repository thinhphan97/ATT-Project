#include "EmployeeData.h"
#include <fstream>
#include <iostream>
#include <string>

EmployeeData::EmployeeData()
{
    _data.resize(0); // resize for data vetor to 0
    _maxId = 0;
}

EmployeeData::EmployeeData(string file_name)
{
    _maxId = 0;
    _data.resize(0); // resize for data vetor to 0

    // open and Read from the file
    ifstream fileIn(file_name);

    int numberEmployee = 0;
    fileIn >> numberEmployee;

    int Id;                     //id is increasing number
    string FName, MInit, LName; //fname, minit, lname are the full name of employee
    long SSN;                   // ssn is employee identification number
    string BDate, Adress;       // Bdate and Adress are birth day and adress of employee
    char Sex;                   //sex of the employee
    int Salary;                 // salary of the employee
    long SuperSSN;              //superSSN is the manager of the employee
    int DNO;

    for (int i = 0; i < numberEmployee; i++)
    {
        fileIn >> Id;
        fileIn >> FName;
        fileIn >> MInit;
        fileIn >> LName;
        fileIn >> SSN;
        fileIn >> BDate;
        fileIn >> Adress;
        fileIn >> Sex;
        fileIn >> Salary;
        fileIn >> SuperSSN;
        fileIn >> DNO;
        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new Employee(Id, FName, MInit, LName, SSN, BDate, Adress, Sex, Salary, SuperSSN, DNO);
        // add object to vetor
        _data.push_back(baseObject);
        _maxId = Id;
    }
    // close the file
    fileIn.close();
}

int EmployeeData::UpdateData(int ID, BaseObject *baseObject)
{
    // cast Employee pointer to Employee pointer
    Employee *employee = (Employee *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {
        if ((_data.at(i)->GetID()) == ID)
        {
            // cast Employee pointer to Employee pointer
            Employee *e = (Employee *)_data.at(i);

            // set EmployeeNumber and Employee
            e->SetFName(employee->GetFName());
            e->SetMInit(employee->GetMInit());
            e->SetLName(employee->GetLName());
            e->SetSSN(employee->GetSSN());
            e->SetBDate(employee->GetBDate());
            e->SetAdress(employee->GetAdress());
            e->SetSex(employee->GetSex());
            e->SetSalary(employee->GetSalary());
            e->SetSuperSSN(employee->GetSuperSSN());
            e->SetDNO(employee->GetDNO());

            return 1;
        }
    }
    return 0;
}
Employee *EmployeeData::GetEmployeeBySSN(long ssn)
{
    Employee *e = nullptr;   
    for (BaseObject *bo : _data)
    {
        if (((Employee *)bo)->GetSSN() == ssn)

        return ((Employee *)bo);
    }
    return e;
}


