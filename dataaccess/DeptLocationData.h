#ifndef Project_dataaccess_DeptLocation_h_
#define Project_dataaccess_DeptLocation_h_
#include <vector>
#include <string>
#include "DataAccess.h"
#include "../businessobject/DeptLocation.h"

using namespace std;
class DeptLocationData : public DataAccess
{
public:
    DeptLocationData();
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