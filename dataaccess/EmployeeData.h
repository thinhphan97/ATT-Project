#ifndef Project_dataaccess_EmployeeData_h_
#define Project_dataaccess_EmployeeData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Employee.h"
#include "../businessobject/BaseObject.h"

using namespace std;
class EmployeeData : public DataAccess
{

public:
  /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
  EmployeeData();

  /** @brief Function is default constructor with pull all data from file
     *  
     *  Function is default constructor with pull all data from file
     *  @return not return
     */
  EmployeeData(string file_name);

  /** @brief Function edit data
     *  
     *  Function edit data
     *  @return 1 if success
     */
  int UpdateData(int ID, BaseObject *baseObject) override;


  Employee*  GetEmployeeBySSN(long ssn);
  
};
#endif