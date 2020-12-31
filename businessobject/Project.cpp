#include "Project.h"

Project::Project(/* args */)
{
}

Project::Project(int pNumber, string pLocation, int dNum)
{
    PNumber = pNumber;
    PLocation = pLocation;
    DNum = dNum;
}

Project::Project(int projectID, int pNumber, string pLocation, int dNum)
{
    ProjectID = projectID;
    PNumber = pNumber;
    PLocation = pLocation;
    DNum = dNum;
}

Project::~Project()
{
}

int Project::GetProjectID()
{
    return ProjectID; // return the value of project id
}

void Project::SetID(int projectID)
{
    ProjectID = projectID; //assignment farameter for project id
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
    return "{ projectID: " + to_string(ProjectID) + ";PNumber: " + to_string(PNumber) + "; PLocation: " + PLocation + "; DNumber:" + to_string(DNum) + " }";
}
