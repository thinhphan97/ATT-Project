#ifndef _dataaccess_EmployeeData_h_
#define _dataaccess_EmployeeData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Employee.h"

using namespace std;

class EmployeeData:public DataAccess
{

public:
    EmployeeData();
    EmployeeData(string file_name);
    void ReadData();
    int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif