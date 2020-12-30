#ifndef Project_dataaccess_DataAccess_h_
#define Project_dataaccess_DataAccess_h_

class DataAccess
{
public:
    virtual int AddData()=0;
    virtual int DeleteData()=0;
    virtual int UpdateData()=0;
    virtual int SelectAllData()=0;
    virtual int SelectData()=0;

};
#endif