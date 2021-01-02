#ifndef Project_dataaccess_DataAccess_h_
#define Project_dataaccess_DataAccess_h_

#include "../businessobject/BaseObject.h"
#include <string>
#include <vector>

class DataAccess
{
protected:
    vector<BaseObject *> _data;
    int _maxId = 0;

public:
    int GetMaxId();
    virtual int ExportToFile(string file_name);
    virtual int AddData(BaseObject *baseObject);
    virtual int DeleteData(int ID);
    virtual int UpdateData(int ID, int deptNumber, string deptLocation);
    virtual vector<BaseObject *> GetAllData();
    virtual BaseObject* GetByID(int ID);
};
#endif