#ifndef Project_dataaccess_DataAccess_h_
#define Project_dataaccess_DataAccess_h_

#include "../businessobject/BaseObject.h"
#include <string>
#include <vector>

class DataAccess
{
protected:
    vector<BaseObject*> _data;
    int _maxId = 0;

public:
    virtual int ExportToFile(string file_name);
    virtual int AddData(BaseObject *baseObject);
    virtual int DeleteData(int ID);
    virtual int UpdateData(int ID);
    virtual int SelectAllData() = 0;
    virtual int SelectData() = 0;
};
#endif