#include "Employee.h"

Employee::Employee()
{
}

Employee::Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary, long superSSN, int dno)
{
    FName = fname;
    MInit = minit;
    LName = lname;
    SSN = ssn;
    BDate = bdate;
    Adress = adress;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}

Employee::Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary, long superSSN, int dno)
{
    Id = id;
    FName = fname;
    MInit = minit;
    LName = lname;
    SSN = ssn;
    BDate = bdate;
    Adress = adress;
    Sex = sex;
    Salary = salary;
    SuperSSN = superSSN;
    DNO = dno;
}

Employee::~Employee()
{
}

int Employee::GetID()
{
    return Id;
}

void Employee::SetID(int id)
{
    Id = id;
}

string Employee::GetFName()
{
    return FName;
}

void Employee::SetFName(string fname)
{
    FName = fname;
}

string Employee::GetMInit()
{
    return MInit;
}
void Employee::SetMInit(string minit)
{
    MInit = minit;
}
string Employee::GetLName()
{
    return LName;
}
void Employee::SetLName(string lname)
{
    LName = lname;
}
long Employee::GetSSN()
{
    return SSN;
}
void Employee::SetSSN(long ssn)
{
    SSN = ssn;
}
string Employee::GetBDate()
{
    return BDate;
}
void Employee::SetBDate(string bdate)
{
    BDate = bdate;
}
string Employee::GetAdress()
{
    return Adress;
}
void Employee::SetAdress(string address)
{
    Adress = address;
}
char Employee::GetSex()
{
    return Sex;
}
void Employee::SetSex(char sex)
{
    Sex = sex;
}
int Employee::GetSalary()
{
    return Salary;
}
void Employee::SetSalary(int salary)
{
    Salary = salary;
}
long Employee::GetSuperSSN()
{
    return SuperSSN;
}
void Employee::SetSuperSSN(long supperssn)
{
    SuperSSN = supperssn;
}
int Employee::GetDNO()
{
    return DNO;
}
void Employee::SetDNO(int dno)
{
    DNO = dno;
}

string Employee::ToString()
{
    return to_string(Id) + " " + FName + " " + MInit + " " + LName + " " +
           to_string(SSN) + " " + BDate + " " + Adress + " " + Sex + " " +
           to_string(Salary) + " " + to_string(SuperSSN) + " " + to_string(DNO);
}
