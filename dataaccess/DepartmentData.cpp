#include "DepartmentData.h"
#include <fstream>
#include <iostream>
#include <string>

DepartmentData::DepartmentData()
{
    _data.resize(0); // resize for data vetor to 0
    _maxId = 0;
}

DepartmentData::DepartmentData(string file_name)
{
    _maxId = 0;
    _data.resize(0); // resize for data vetor to 0

    // open and Read from the file
    ifstream fileIn(file_name);

    int numberDepartment = 0;
    fileIn >> numberDepartment;

    int Id;
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;

    for (int i = 0; i < numberDepartment; i++)
    {

        fileIn >> Id;
        fileIn >> DName;
        fileIn >> DNumber;
        fileIn >> MgrSSN;
        fileIn >> MgrStartDate;

        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new Department(Id, DName, DNumber, MgrSSN, MgrStartDate);
        // add object to vetor
        _data.push_back(baseObject);
        _maxId = Id;
        // close the file
    }
            fileIn.close();
}

int DepartmentData::UpdateData(int ID, BaseObject *baseObject)
{

    // cast Department pointer to Department pointer
    Department *department = (Department *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {
        if ((_data.at(i)->GetID()) == ID)
        {
            // cast Department pointer to Department pointer
            Department *de = (Department *)_data.at(i);

            // set DepartmentNumber and Department
            de->SetDName(department->GetDName());
            de->SetDNumber(department->GetDNumber());
            de->SetMgrSSN(department->GetMgrSSN());
            de->SetMgrStartDate(department->GetMgrStartDate());

            return 1;
        }
    }
    return 0;
}
