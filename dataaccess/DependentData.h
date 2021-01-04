#ifndef Project_dataaccess_DependentData_h_
#define Project_dataaccess_DependentData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Dependent.h"

using namespace std;
class DependentData : public DataAccess
{
public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    DependentData();
    /** @brief Function is default constructor with pull all data from file
     *  
     *  Function is default constructor with pull all data from file
     *  @return not return
     */
    DependentData(string file_name);

    /** @brief Function edit data
     *  
     *  Function edit data
     *  @return 1 if success
     */
    int UpdateData(int ID, BaseObject *baseObject) override;
    /** @brief Function is get Dependent is Son Or Daughter
     *  Function is get Dependent is Son Or Daughter
     *  @return not return
     */
    vector<BaseObject*> GetDependentSonOrDaughter();
};
#endif