#ifndef Project_businessobject_Department_h_
#define Project_businessobject_Department_h_
#include <string>

using namespace std;
class Department
{
private:
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;

public:
    Department();
    Department(string Dname, int DNumber, long MgrSSN, string MgrStartDate);
};

#endif