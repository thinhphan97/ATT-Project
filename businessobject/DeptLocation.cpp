#include "DeptLocation.h"

DeptLocation::DeptLocation(/* args */)
{
}

DeptLocation::DeptLocation(int dNumber, string dLocation)
{

    DNumber = dNumber;
    DLocation = dLocation;
}

DeptLocation::DeptLocation(int deptLocationID, int dNumber, string dLocation)
{
    DeptLocationID = deptLocationID;
    DNumber = dNumber;
    DLocation = dLocation;
}

DeptLocation::~DeptLocation()
{
}

int DeptLocation::GetDeptLocationID()
{
    return DeptLocationID; // return the value of dept location id
}

void DeptLocation::SetID(int deptLocationID)
{
    DeptLocationID = deptLocationID; //assignment farameter for dept id
}

int DeptLocation::GetDeptLocationNumber()
{
    return DNumber; // return the value of DeptLocationNumber
}

void DeptLocation::SetDeptLocationNumber(int dNumber)
{
    DNumber = dNumber; //assignment farameter for DeptLocationNumber
}

string DeptLocation::GetDeptLocation()
{
    return DLocation; // return the value of DLocation
}

void DeptLocation::SetDeptLocation(string dLocation)
{
    DLocation = dLocation; // assignment farameter for DLocation
}

// json DeptLocation::ToJson()
// {
//     json j;
//     j["DeptLocationsID"] = DeptLocationID;
//     j["DNumber"] = DNumber;
//     j["DLocation"] = DLocation;
//     return j;
// }

string DeptLocation::ToString()
{
    return "{ DeptLocationID: " + to_string(DeptLocationID) + "; DNumber: " + to_string(DNumber) +"; DLocation: " + DLocation +" }";
}
