#ifndef Project_dataaccess_DepartmentData_h_
#define Project_dataaccess_DepartmentData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Department.h"
#include "../businessobject/BaseObject.h"

using namespace std;
class DepartmentData : public DataAccess
{

public:
  /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
  DepartmentData();

  /** @brief Function is default constructor with pull all data from file
     *  
     *  Function is default constructor with pull all data from file
     *  @return not return
     */
  DepartmentData(string file_name);

    /** @brief Function edit data
     *  
     *  Function edit data
     *  @return 1 if success
     */
  int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif