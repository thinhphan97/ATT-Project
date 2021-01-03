#ifndef Project_dataaccess_ProjectData_h_
#define Project_dataaccess_ProjectData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/Project.h"

using namespace std;
class ProjectData : public DataAccess
{
public:
    ProjectData();
    ProjectData(string file_name); 
    int UpdateData(int ID, BaseObject *baseObject) override;
};
#endif