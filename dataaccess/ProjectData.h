#ifndef Project_dataaccess_ProjectData_h_
#define Project_dataaccess_ProjectData_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/DeptLocation.h"

using namespace std;
class ProjectData : public DataAccess
{
public:
    ProjectData();
    int PullFile(string file_name);
    int ExportToFile(string filename);
    int AddData(BaseObject *baseObject);
    int DeleteData();
    int UpdateData();
    int SelectAllData();
    int SelectData();
    int GetMaxId();
};
#endif