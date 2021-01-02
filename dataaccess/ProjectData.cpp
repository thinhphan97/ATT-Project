#include "ProjectData.h"
#include <fstream>
#include <iostream>
#include <string>

ProjectData::ProjectData()
{
    _data.resize(0);
    _maxId = 0;
}

ProjectData::ProjectData(string file_name)
{
    _maxId = 0;
    _data.resize(0);

    ifstream fileIn(file_name);

    int numberProject = 0;
    fileIn >> numberProject;
    int Id;
    string PName;
    int PNumber;
    string PLocation;
    int DNum;

    for (int i = 0; i < numberProject; i++)
    {
        fileIn >> Id;
        fileIn >> PName;
        fileIn >> PNumber;
        fileIn >> PLocation;
        fileIn >> DNum;
        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new Project(Id, PName, PNumber, PLocation, DNum);

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
int ProjectData::UpdateData(int ID, BaseObject *baseObject)
{
    Project *project = (Project *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            Project *p = (Project *)_data.at(i);

            p->SetProjectName(project->GetProjectName());
            p->SetProjectNumber(project->GetProjectNumber());
            p->SetProjectLocation(project->GetProjectLocation());
            p->SetDNum(project->GetDNum());
            return 1;
        }
    }
    return 0;
}
// int DeptLocationData::GetMaxId()
// {
//     return _maxId;
// }