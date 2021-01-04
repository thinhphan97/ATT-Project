#include "Department.h"
#include <iostream>

using namespace std;

Department::Department(){};
Department::Department(string DName, int DNumber, long MgrSSN, string MgrStartDate)
{
    this->DName = DName;
    this->DNumber = DNumber;
    this->MgrSSN = MgrSSN;
    this->MgrStartDate = MgrStartDate;
}

Department::Department(int Id, string DName, int DNumber, long MgrSSN, string MgrStartDate){
    this->Id = Id;
    this->DName = DName;
    this->DNumber = DNumber;
    this->MgrSSN = MgrSSN;
    this->MgrStartDate = MgrStartDate;
}
int Department::GetId(){
    return Id;
}
void Department::SetId(int Id){
    this->Id =Id;
}
string Department::GetDName(){
    return DName;
}
void Department::SetDName(string DName){
    this->DName = DName;
}
int Department::GetDNumber(){
    return DNumber;
}
void Department::SetDNumber(int DNumber){
    this->DNumber = DNumber;
}
long Department::GetMgrSSN(){
    return MgrSSN;
}
void Department::SetMgrSSN(long MgrSSN){
    this->MgrSSN = MgrSSN;
}
string Department::GetMgrStartDate(){
    return MgrStartDate;
}
void Department::SetMgrStartDate(string MgrStartDate){
    this->MgrStartDate = MgrStartDate;
}
string  Department::ToString(){
    return to_string(Id)+" "+DName+" "+to_string(DNumber)+" "+to_string(MgrSSN)+" "+MgrStartDate;
}