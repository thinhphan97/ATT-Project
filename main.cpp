#include "businessobject/Employee.h"
#include "dataaccess/DataAccess.h"
#include "DataAccess/EmployeeData.h"
#include "businessobject/Department.h"
#include "iostream"

using namespace std;

int main(){
    Employee e(0,"John","B","Smith",123456789,"1965-01-09","731Fodren, Houston,TX", 'M', 30000, 333445555, 5);
    Department d(0,"Research", 5, 333445555,"1988-05-22");
    DataAccess* data = new EmployeeData("Employee.data");
    data->AddData(&e);
    cout<< e.ToString()<< endl;
    cout<< d.ToString();
    return 0;
}