#include "DeptLocation.h"

DeptLocation::DeptLocation(/* args */)
{
}

DeptLocation::DeptLocation(int id, int DNum, int DLoca)
{
    DeptLocationID = id;
    DNumber = DNum;
    DLocation = DLoca;
}

DeptLocation::~DeptLocation()
{
}

int DeptLocation::GetDeptLocationID()
{
    return DeptLocationID; // the value of dept location id
}

void DeptLocation::SetDeptLocationID(int id)
{
    DeptLocationID = id; //assignment farameter for dept id
}

int DeptLocation::GetDeptLocationNumber()
{
    return DNumber; // the value of dept location id
}

void DeptLocation::SetDeptLocationNumber(int DNum)
{
    DNumber = DNum; //assignment farameter for dept number
}

string DeptLocation::GetDeptLocation()
{
    return DLocation; // the value of dept location id
}

void DeptLocation::SetDeptLocation(int DLoca)
{
    DLocation = DLoca; // assignment farameter for dept location
}

json DeptLocation::ToJson()
{   
    json j;
    // assignment values for keys
    j["DeptLocationID"] = DeptLocationID;
    j["DNumber"] = DNumber;
    j["DLocation"] = DLocation;
    return j;
}
