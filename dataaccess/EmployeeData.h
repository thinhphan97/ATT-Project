#ifndef Project_dataaccess_EmployeeData_h_
#define Project_dataaccess_EmployeeData_h_
#include <vector>
#include "DataAccess.h"
#include "../businessobject/Employee.h"

using namespace std;
class EmployeeData:public DataAccess
{
private:
    vector<Employee> _data;
    int _MaxId;
    Employee _DataAdd;
    string file_name;
public:
    EmployeeData();
    EmployeeData(string file_name, Employee e);
    int AddData();
    int DeleteData();
    int UpdateData();
    int SelectAllData();
    int SelectData();
    int GetMaxId();
};
#endif