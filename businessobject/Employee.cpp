#include "Employee.h"

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
void Employee::SetId(int Id){
    this->Id =Id;
}
// Employee& Employee::operator=(Employee& e){
//     this->Adress = e.Adress;
//     this->BDate = e.BDate;
//     this->DNO = e.DNO;
//     this->FName = e.FName;
//     this->Id = e.Id;
//     this->LName = e.LName;
//     this->MInit = e.MInit;
//     this->Salary = e.Salary;
//     this->Sex = e.Sex;
//     this->SSN = e.SSN;
//     this->SuperSSN = e.SuperSSN;
//     return *this;
// };

json Employee::ToJson(){
    json e;
    e["Id"] = Id;
    e["Fname"] = FName;
    e["Minit"] = MInit;
    e["Lname"] = LName;
    e["SSN"] = SSN;
    e["Bdate"] = BDate;
    e["Adress"] = Adress;
    e["Sex"] = string(1,Sex);
    e["Salary"] = Salary;
    e["SuperSSN"] = SuperSSN;
    e["DNO"] = DNO;

    return e;

}