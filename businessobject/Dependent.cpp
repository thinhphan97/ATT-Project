#include "Dependent.h"

Dependent::Dependent()
{
}

Dependent::Dependent(long essn, string dependentName, char sex, string bDay, string relationship)
{
    ESSN = essn;
    DependentName = dependentName;
    Sex = sex;
    BDate = bDay;
    Relationship = relationship;
}

Dependent::Dependent(int dependentID, long essn, string dependentName, char sex, string bDay, string relationship)
{
    DependentID = dependentID;
    ESSN = essn;
    DependentName = dependentName;
    Sex = sex;
    BDate = bDay;
    Relationship = relationship;
}

Dependent::~Dependent()
{
}

int Dependent::GetID()
{
    return DependentID; // return the value of project id
}

void Dependent::SetID(int dependentID)
{
    DependentID = dependentID; //assignment farameter for project id
}

long Dependent::GetESSN()
{
    return ESSN;
}

void Dependent::SetESSN(long essn)
{
    ESSN = essn;
}

string Dependent::GetDependentName()
{

    return DependentName;
}

void Dependent::SetDependentName(string dependentName)
{
    DependentName = dependentName;
}

char Dependent::GetSex()
{
    return Sex;
}

void Dependent::SetSex(char sex)
{
    Sex = sex;
}

string Dependent::GetBDate()
{
    return BDate;
}
void Dependent::SetBDate(string bDate)
{
    BDate = bDate;
}

string Dependent::GetRelationship()
{
    return Relationship;
}

void Dependent::SetRelationship(string relationship)
{
    Relationship = relationship;
}

string Dependent::ToString()
{
    return to_string(DependentID) + " " + to_string(ESSN) + " " + DependentName + " " + Sex + " " + BDate + " " + Relationship;
}
