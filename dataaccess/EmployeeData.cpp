#include "EmployeeData.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;



EmployeeData::EmployeeData(){
    _data.resize(0);
    _maxId = 0;
}
EmployeeData::EmployeeData(string file_name){
    _maxId = 0;
    _data.resize(0);
    this->file_name = file_name;
}
void EmployeeData::ReadData(){

    ifstream fileIn(file_name);
    int numberProject = 0;
    fileIn >> numberProject;
    int Id;
    string FName, MInit, LName; 
    long SSN;
    string BDate, Adress; 
    char Sex;
    int Salary;
    long SuperSSN;
    int DNO;

    for (int i = 0; i < numberProject; i++)
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
 

        BaseObject *baseObject = new Employee(Id, FName, MInit, LName, SSN, BDate, Adress, Sex, Salary, SuperSSN, DNO);

        _data.push_back(baseObject);
        _maxId = Id;
    }
    fileIn.close();
}

int EmployeeData::UpdateData(int ID, BaseObject *baseObject){
    Employee* employee = (Employee*) baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            Employee* p = (Employee*)_data.at(i);

            p->SetFName(employee->GetFName());
            p->SetMInit(employee->GetMInit());
            p->SetLName(employee->GetLName());
            p->SetSSN(employee->GetSSN());
            p->SetBDate(employee->GetBDate());
            p->SetAdress(employee->GetAdress());
            p->SetSex(employee->GetSex());
            p->SetSalary(employee->GetSalary());
            p->SetSuperSSN(employee->GetSuperSSN());
            p->SetDNO(employee->GetDNO());

            return 1;
        }
    }
    return 0;
}
