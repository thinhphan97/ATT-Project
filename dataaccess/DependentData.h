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
    DependentData();
    DependentData(string file_name); 
    int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif