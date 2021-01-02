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
  DeptLocationData();
  DeptLocationData(string file_name);
  // int ExportToFile(string filename) override;
  // int AddData(BaseObject *baseObject) override;
  // int DeleteData(int ID) override;
  int UpdateData(int ID, BaseObject *baseObject) override;
  // int GetMaxId();
};
#endif