#include "ProjectData.h"
#include <fstream>
#include <iostream>
#include <string>

ProjectData::ProjectData()
{
    _data.resize(0); // resize for data vetor to 0
    _maxId = 0;
}

ProjectData::ProjectData(string file_name)
{
    _maxId = 0;
    _data.resize(0); // resize for data vetor to 0

    // open and Read from the file
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
        // add object to vetor
        _data.push_back(baseObject);
        _maxId = Id;
    }
    // close the file
    fileIn.close();
}

int ProjectData::UpdateData(int ID, BaseObject *baseObject)
{
    // cast Project pointer to Project pointer
    Project *project = (Project *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        { // cast Project pointer to Project pointer
            Project *p = (Project *)_data.at(i);

            // set ProjectName,  ProjectNumber, ProjectLocation and GetDNum
            p->SetProjectName(project->GetProjectName());
            p->SetProjectNumber(project->GetProjectNumber());
            p->SetProjectLocation(project->GetProjectLocation());
            p->SetDNum(project->GetDNum());
            return 1;
        }
    }
    return 0;
}
