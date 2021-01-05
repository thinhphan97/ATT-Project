#include "Department.h"

Department::Department()
{
}

Department::Department(int id, string dname, int dnumber, long mgrssn, string mgrstartdate)
{
    Id = id;
    DName = dname;
    DNumber = dnumber;
    MgrSSN = mgrssn;
    MgrStartDate = mgrstartdate;
}

Department::Department(string dname, int dnumber, long mgrssn, string mgrstartdate)
{
    DName = dname;
    DNumber = dnumber;
    MgrSSN = mgrssn;
    MgrStartDate = mgrstartdate;
}

Department::~Department()
{
}

int Department::GetID()
{
    return Id;
}

void Department::SetID(int id)
{
    Id = id;
}

string Department::GetDName()
{
    return DName;
}
void Department::SetDName(string dname)
{
    DName = dname;
}
int Department::GetDNumber()
{
    return DNumber;
}
void Department::SetDNumber(int dnumber)
{
    DNumber = dnumber;
}
long Department::GetMgrSSN()
{
    return MgrSSN;
}
void Department::SetMgrSSN(long mgrssn)
{
    MgrSSN = mgrssn;
}
string Department::GetMgrStartDate()
{
    return MgrStartDate;
}
void Department::SetMgrStartDate(string mgrstartdate)
{
    MgrStartDate = mgrstartdate;
}

string Department::ToString()
{

    return to_string(Id) + " " + DName + " " + to_string(DNumber) + " " +
           to_string(MgrSSN) + " " + MgrStartDate;
}
