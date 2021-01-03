#ifndef Project_dataaccess_WorkOnData_h_
#define Project_dataaccess_WorkOnData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/WorkOn.h"

using namespace std;
class WorkOnData : public DataAccess
{
public:
    WorkOnData();
    WorkOnData(string file_name); 
    int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif