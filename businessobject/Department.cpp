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
