#include "Employee.h"

Employee::Employee(){};
Employee::Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary,long superSSN, int dno){
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