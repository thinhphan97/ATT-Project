#include "DeptLocation.h"

DeptLocation::DeptLocation(/* args */)
{
}

DeptLocation::DeptLocation(int id, int DNum, string DLoca)
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
    return DeptLocationID; // return the value of dept location id
}

void DeptLocation::SetDeptLocationID(int id)
{
    DeptLocationID = id; //assignment farameter for dept id
}

int DeptLocation::GetDeptLocationNumber()
{
    return DNumber; // return the value of DeptLocationNumber
}

void DeptLocation::SetDeptLocationNumber(int DNum)
{
    DNumber = DNum; //assignment farameter for DeptLocationNumber
}

string DeptLocation::GetDeptLocation()
{
    return DLocation; // return the value of DLocation
}

void DeptLocation::SetDeptLocation(string DLoca)
{
    DLocation = DLoca; // assignment farameter for DLocation
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
