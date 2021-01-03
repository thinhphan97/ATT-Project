#include "Project.h"

Project::Project(/* args */)
{
}

Project::Project(string pName, int pNumber, string pLocation, int dNum)
{
    PName = pName;
    PNumber = pNumber;
    PLocation = pLocation;
    DNum = dNum;
}

Project::Project(int projectID, string pName, int pNumber, string pLocation, int dNum)
{
    PName = pName;
    ProjectID = projectID;
    PNumber = pNumber;
    PLocation = pLocation;
    DNum = dNum;
}

Project::~Project()
{
}

int Project::GetID()
{
    return ProjectID; // return the value of project id
}

void Project::SetID(int projectID)
{
    ProjectID = projectID; //assignment farameter for project id
}

string Project::GetProjectName()
{
    return PName;
}

void Project::SetProjectName(string pName)
{
    PName = pName;
}

int Project::GetProjectNumber()
{
    return PNumber; // return the value of project number
}

void Project::SetProjectNumber(int pNumber)
{
    PNumber = pNumber; //assignment farameter for project number
}

string Project::GetProjectLocation()
{
    return PLocation; // return the value of PLocation
}

void Project::SetProjectLocation(string pLocation)
{
    PLocation = pLocation; // assignment farameter for PLocation
}

int Project::GetDNum()
{
    return DNum; // return the value of DNum
}

void Project::SetDNum(int dNum)
{
    DNum = dNum; //assignment farameter for DNum
}
string Project::ToString()
{
    return to_string(ProjectID) + " " + PName + " " + to_string(PNumber) + " " + PLocation + " " + to_string(DNum);
}
