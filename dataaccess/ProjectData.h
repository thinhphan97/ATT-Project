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
    // int ExportToFile(string filename) override;
    // int AddData(BaseObject *baseObject) override;
    // int DeleteData(int ID) override;
    int UpdateData(int ID, BaseObject *baseObject) override;
    // int GetMaxId();
};
#endif