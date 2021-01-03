#ifndef Project_final_dataaccess_DataAccess_h_
#define Project_final_dataaccess_DataAccess_h_

#include "../businessobject/BaseObject.h"
#include <string>
#include <vector>

class DataAccess
{
protected:
    vector<BaseObject *> _data;
    int _maxId = 0;

public:
    /** @brief Function get maxID
     *  
     *  Function get maxID
     *  @return max ID value
     */
    int GetMaxId();

    /** @brief Function write data to file
     *  Function write data to file
     *  @return 1 if success
     */
    virtual int ExportToFile(string file_name);

    /** @brief Function add a object to file
     *  Function add a object to file
     *  @return 1 if success 
     */
    virtual int AddData(BaseObject *baseObject);
    virtual int DeleteData(int ID);
    virtual int UpdateData(int ID, BaseObject *baseObject);
    virtual vector<BaseObject *> GetAllData();
    virtual BaseObject *GetByID(int ID);
};
#endif