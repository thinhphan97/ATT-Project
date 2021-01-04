#include "Employee.h"
#include "../libs/Utility.h"
Employee::Employee(){};
Employee::Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
    this->FName = fname;
    this->MInit = minit;
    this->LName = lname;
    this->SSN = ssn;
    this->BDate = bdate;
    this->Adress = adress;
    this->Sex = sex;
    this->Salary = salary;
    this->SuperSSN = superSSN;
    this->DNO = dno;
};
Employee::Employee(int id,string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
    this->Id = id;
    this->FName = fname;
    this->MInit = minit;
    this->LName = lname;
    this->SSN = ssn;
    this->BDate = bdate;
    this->Adress = adress;
    this->Sex = sex;
    this->Salary = salary;
    this->SuperSSN = superSSN;
    this->DNO = dno;
};
int Employee::GetID(){
    return Id;
}
void Employee::SetID(int Id){
    this->Id = Id;
}
string Employee::GetFName(){
    return FName;
}
void Employee::SetFName(string FName){
    this->FName =FName;
}
string Employee::GetMInit(){
    return MInit;
}
void Employee::SetMInit(string MInit){
    this->MInit = MInit;
}
string Employee::GetLName(){
    return LName;
}
void Employee::SetLName(string LName){
    this->LName = LName;
}
long Employee::GetSSN(){
    return SSN;
}
void Employee::SetSSN(long SSN){
    this-> SSN = SSN;
}
string Employee::GetBDate(){
    return BDate;
}
void Employee::SetBDate(string BDate){
    this->BDate = BDate;
}
string Employee::GetAdress(){
    return Adress;
}
void Employee::SetAdress(string Adress){
    this-> Adress = Adress;
}
char Employee::GetSex(){
    return Sex;
}
void Employee::SetSex(char Sex){
    this->Sex = Sex;
}
int Employee::GetSalary(){
    return Salary;
}
void Employee::SetSalary(int Salary){
    this->Salary = Salary;
}
long Employee::GetSuperSSN(){
    return SuperSSN;
}
void Employee::SetSuperSSN(long SuperSSN){
    this->SuperSSN = SuperSSN;
}
int Employee::GetDNO(){
    return DNO;
}
void Employee::SetDNO(int){
    this->DNO = DNO;
}
string Employee::ToString(){
    return to_string(Id)+" "+FName+" "+MInit+" "+LName+" "+to_string(SSN)+" "+BDate+" "+Utility::replaceAll(Adress," ","_") +" "+string(1, Sex)+" "+to_string(Salary)+" "+to_string(SuperSSN)+" "+to_string(DNO);
}
