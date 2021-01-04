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
    string file_name;

public:
    /** @brief Function get maxID
     *  
     *  Function get maxID
     *  @return max ID value
     */
    int GetMaxId();

    /** @brief Function write data to file
     *  Function write data to file
     *  @return 1 if success.
     */
    virtual int ExportToFile(string file_name);

    /** @brief Function add a object to vector
     *  Function add a object to vector
     *  @return max id value if success.
     */
    virtual int AddData(BaseObject *baseObject);

    /** @brief Function delete a object in vector
     *  Function delete a object in vector
     *  @return 1 value if success.
     */
    virtual int DeleteData(int ID);

    /** @brief Function is virtual funtion for edit a object 
     *  Function is virtual funtion for edit a object 
     *  @return 1 value if success.
     */
    virtual int UpdateData(int ID, BaseObject *baseObject) = 0;

    /** @brief Function get all object
     *  Function get all object
     *  @return a vector point of BaseObject
     */

    virtual vector<BaseObject *> GetAllData();

    /** @brief Function get a object
     *  Function get a object
     *  @return a point of BaseObject
     */
    virtual BaseObject *GetByID(int ID);
};
#endif