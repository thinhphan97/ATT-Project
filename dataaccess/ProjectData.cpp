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
