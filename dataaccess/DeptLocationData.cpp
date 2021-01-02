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

// int DeptLocationData::AddData(BaseObject *baseObject)
// {
//     // _maxId++;
//     // baseObject->SetID(_maxId);
//     // _data.push_back(baseObject);
//     // return _maxId;
// }

// int DeptLocationData::ExportToFile(string file_name)
// {

//     ofstream fileOut;
//     fileOut.open(file_name, ios::out);
//     fileOut << _data.size() << endl;
//     for (BaseObject *b : _data)
//     {
//         fileOut << b->ToString() << endl;
//     }
//     fileOut.close();
//     return 1;
// }

// int DeptLocationData::DeleteData(int ID)
// {
//     for (int i = 0; i < _data.size(); i++)
//     {

//         if ((_data.at(i)->GetID()) == ID)
//         {
//             _data.erase(_data.begin() + i);
//         }
//     }
//     return 1;
// }
int DeptLocationData::UpdateData(int ID, int deptNumber, string deptLocation)
{

    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            DeptLocation *d = (DeptLocation *)_data.at(i);

            d->SetDeptLocationNumber(deptNumber);
            d->SetDeptLocation(deptLocation);
            return 1;
        }
    }
    return 0;
}
// int DeptLocationData::GetMaxId()
// {
//     return _maxId;
// }
