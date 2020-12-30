#include "businessobject/Employee.h"
#include "dataaccess/DataAccess.h"
#include "dataaccess/EmployeeData.h"
#include "iostream"

using namespace std;

int main(){
    Employee e("thinh","B","phan",123456456,"1997-09-13", "vietnam",'M', 30000, 333445555, 5);
    DataAccess* data = new EmployeeData("Employee.data",e);
    cout << data->AddData();
    
}