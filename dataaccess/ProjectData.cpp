#include "ProjectData.h"
#include <fstream>
#include "../libs/json.hpp"
#include <iostream>
#include <string>
using json = nlohmann::json;

ProjectData::ProjectData()
{
    _data.resize(0);
     _maxId = 0;
}

int ProjectData::PullFile(string file_name)
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

int ProjectData::AddData(BaseObject *baseObject)
{
    _maxId++;
    baseObject->SetID(_maxId);

    _data.push_back(baseObject);

    ExportToFile("project.txt");
    return _maxId;
}

int ProjectData::ExportToFile(string file_name)
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

int ProjectData::DeleteData()
{
    return 0;
}
int ProjectData::UpdateData()
{
    return 0;
}
int ProjectData::SelectAllData()
{
    return 0;
}
int ProjectData::SelectData()
{
    return 0;
}
int ProjectData::GetMaxId()
{
    return _maxId;
}
