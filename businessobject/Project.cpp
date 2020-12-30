#include "Project.h"

Project::Project(/* args */)
{
}

Project::Project(int id, int PNum, string PLoca, int Dnum)
{
    ProjectID = id;
    PNumber = PNum;
    PLocation = PLoca;
    DNum = Dnum;
}

Project::~Project()
{
}

int Project::GetProjectID()
{
    return ProjectID; // return the value of project id
}

void Project::SetProjectID(int id)
{
    ProjectID = id; //assignment farameter for project id
}

int Project::GetProjectNumber()
{
    return PNumber; // return the value of project number
}

void Project::SetProjectNumber(int PNum)
{
    PNumber = PNum; //assignment farameter for project number
}

string Project::GetProjectLocation()
{
    return PLocation; // return the value of PLocation
}

void Project::SetProjectLocation(string PLoca)
{
    PLocation = PLoca; // assignment farameter for PLocation
}

int Project::GetDNum()
{
    return DNum; // return the value of DNum
}

void Project::SetDNum(int Dnum)
{
    DNum = Dnum; //assignment farameter for DNum
}

json Project::ToJson()
{
    json j;
    // assignment values for keys
    j["ProjectID"] = ProjectID;
    j["PNumber"] = PNumber;
    j["PLocation"] = PLocation;
    j["DNum"] = DNum;
    return j;
}
