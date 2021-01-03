#include "WorkOn.h"

WorkOn::WorkOn()
{
}

WorkOn::WorkOn(long essn, int pno, float hours)
{
    ESSN = essn;
    PNO = pno;
    Hours = hours;
}

WorkOn::WorkOn(int workOnID, long essn, int pno, float hours)
{
    WorkOnID = workOnID;
    ESSN = essn;
    PNO = pno;
    Hours = hours;
}

WorkOn::~WorkOn()
{
}

int WorkOn::GetID()
{
    return WorkOnID; // return the value of project id
}

void WorkOn::SetID(int workOnID)
{
    WorkOnID = workOnID; //assignment farameter for project id
}

long WorkOn::GetESSN()
{
    return ESSN;
}

void WorkOn::SetESSN(long essn)
{
    ESSN = essn;
}

int WorkOn::GetPNO()
{

    return PNO;
}

void WorkOn::SetPNO(int pno)
{
    PNO = pno;
}

float WorkOn::GetHours()
{
    return Hours;
}

void WorkOn::SetHours(float hours)
{
    Hours = hours;
}

string WorkOn::ToString()
{
    return to_string(WorkOnID) + " " + to_string(ESSN) + " " + to_string(PNO) + " " + to_string(Hours);
}
