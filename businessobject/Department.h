#ifndef Project_businessobject_Department_h_
#define Project_businessobject_Department_h_
#include <string>

using namespace std;
class Department{
private:
    int Id;
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;

public:
    Department();
    Department(int, string, int, long, string);
    Department(string, int, long, string);
    int GetId();
    void SetId(int);
    string GetDName();
    void SetDName(string);
    int GetDNumber();
    void SetDNumber(int);
    long GetMgrSSN();
    void SetMgrSSN(long);
    string GetMgrStartDate();
    void SetMgrStartDate(string);
    string ToString();
};

#endif