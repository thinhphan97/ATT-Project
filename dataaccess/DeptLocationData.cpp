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
    // _maxId = 0;
    // _data.resize(0);
    // ifstream inFile(file_name);
    // const int maxSize = 255;
    // char buff[maxSize];
    // while (inFile.getline(buff, maxSize))
    // {
    //     json j = json::parse(buff);

    //     DeptLocation d(
    //         j["DeptLocationID"],
    //         j["DNumber"],
    //         j["DLocation"]);
    //     _data.push_back(&d);
    //     _maxId = j["DeptLocationID"];
    // }
    // inFile.close();
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
