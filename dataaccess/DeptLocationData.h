#ifndef Project_dataaccess_DeptLocation_h_
#define Project_dataaccess_DeptLocation_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/DeptLocation.h"
#include "../businessobject/BaseObject.h"

using namespace std;
class DeptLocationData : public DataAccess
{

public:
  /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
  DeptLocationData();

  /** @brief Function is default constructor with pull all data from file
     *  
     *  Function is default constructor with pull all data from file
     *  @return not return
     */
  DeptLocationData(string file_name);

    /** @brief Function edit data
     *  
     *  Function edit data
     *  @return 1 if success
     */
  int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif