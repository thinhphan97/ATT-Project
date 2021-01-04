#include "DeptLocationData.h"
#include <fstream>
#include <iostream>
#include <string>

DeptLocationData::DeptLocationData()
{
    _data.resize(0); // resize for data vetor to 0
    _maxId = 0;
}

DeptLocationData::DeptLocationData(string file_name)
{
    _maxId = 0;
    _data.resize(0); // resize for data vetor to 0

    // open and Read from the file
    ifstream fileIn(file_name);

    int numberDeptLocation = 0;
    fileIn >> numberDeptLocation;
    int Id;
    int DNumber;
    string DLocation;

    for (int i = 0; i < numberDeptLocation; i++)
    {
        fileIn >> Id;
        fileIn >> DNumber;
        fileIn >> DLocation;
        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new DeptLocation(Id, DNumber, DLocation);
        // add object to vetor
        _data.push_back(baseObject);
        _maxId = Id;
    }
    // close the file
    fileIn.close();
}

int DeptLocationData::UpdateData(int ID, BaseObject *baseObject)
{
    // cast DeptLocation pointer to DeptLocation pointer
    DeptLocation *deptLocation = (DeptLocation *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {
        if ((_data.at(i)->GetID()) == ID)
        {
            // cast DeptLocation pointer to DeptLocation pointer
            DeptLocation *d = (DeptLocation *)_data.at(i);

            // set DeptLocationNumber and DeptLocation
            d->SetDeptLocationNumber(deptLocation->GetDeptLocationNumber());
            d->SetDeptLocation(deptLocation->GetDeptLocation());
            return 1;
        }
    }
    return 0;
}
