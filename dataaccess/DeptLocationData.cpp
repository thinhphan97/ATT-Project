#include "DeptLocationData.h"
#include <fstream>
#include <iostream>
#include <string>

DeptLocationData::DeptLocationData()
{
    _data.resize(0);
    _maxId = 0;
}

DeptLocationData::DeptLocationData(string file_name)
{
    _maxId = 0;
    _data.resize(0);

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

        _data.push_back(baseObject);
        _maxId = Id;
    }

    fileIn.close();
}

int DeptLocationData::UpdateData(int ID, BaseObject *baseObject)
{
    DeptLocation *deptLocation = (DeptLocation *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            DeptLocation *d = (DeptLocation *)_data.at(i);

            d->SetDeptLocationNumber(deptLocation->GetDeptLocationNumber());
            d->SetDeptLocation(deptLocation->GetDeptLocation());
            return 1;
        }
    }
    return 0;
}
