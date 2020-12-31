#include "DeptLocationData.h"
#include <fstream>
#include "../libs/json.hpp"
#include <iostream>
#include <string>
using json = nlohmann::json;

DeptLocationData::DeptLocationData()
{
    _data.resize(0);
     _maxId = 0;
}

int DeptLocationData::PullFile(string file_name)
{
_maxId = 0;
    _data.resize(0);
    ifstream fileIn(file_name);
    int numberDeptLocation;
    fileIn >> numberDeptLocation;
    int Id;
    int DNumber; 
    string DLocation;
    for (int i =0; i<numberDeptLocation; i++){
        fileIn >> Id;
        fileIn >> DNumber;
        fileIn >> DLocation;

        DeptLocation deptLocation(Id, DNumber, DLocation);
        _data.push_back(&deptLocation);
        cout << deptLocation.ToString();
        _maxId = Id;
    }
    return 1;
}

int DeptLocationData::AddData(BaseObject *baseObject)
{
    _maxId++;
    baseObject->SetID(_maxId);

    _data.push_back(baseObject);

    ExportToFile("dept_location.txt");
    return _maxId;
}

int DeptLocationData::ExportToFile(string file_name)
{
    ofstream fileOut(file_name);
    fileOut << _data.size() << endl;
    for (BaseObject *baseObject : _data)
    {
        fileOut << baseObject->ToString() << endl;
    }
    fileOut.close();
    return 1;
}

int DeptLocationData::DeleteData()
{
    return 0;
}
int DeptLocationData::UpdateData()
{
    return 0;
}
int DeptLocationData::SelectAllData()
{
    return 0;
}
int DeptLocationData::SelectData()
{
    return 0;
}
int DeptLocationData::GetMaxId()
{
    return _maxId;
}
