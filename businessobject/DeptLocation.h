#ifndef Project_businessobject_DeptLocation_h
#define Project_businessobject_DeptLocation_h

#include <string>
#include "../libs/json.hpp"

using namespace std;
using json = nlohmann::json;

class DeptLocation
{
private:
    int DeptLocationID; // DeptLocation ID
    int DNumber;        // DeptLocation Number
    string DLocation;   // DeptLocation Location

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    DeptLocation();

    /** @brief Function is constructor with parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    DeptLocation(int id, int DNum, int DLoca);

    /** @brief Function is default deconstructor
     *  
     *  Function is default deconstructor
     *  @return not return
     */
    ~DeptLocation();

    /** @brief Function get the value of dept location id
     *  
     *  Function get the value of dept location id
     *  @return returns the value of dept location id that data type is int
     */
    int GetDeptLocationID();

    /** @brief Function set the value for dept location id
     *  
     *  Function set the value for dept location id
     *  @return not return
     */
    void SetDeptLocationID(int id);

    /** @brief Function get the value of dept location number
     *  
     *  Function get the value of dept location number
     *  @return returns the value of dept location number that data type is int
     */
    int GetDeptLocationNumber();

    /** @brief Function set the value for dept location number
     *  
     *  Function set the value for dept location id
     *  @return not return
     */
    void SetDeptLocationNumber(int DNum);

    /** @brief Function get the value of dept location
     *  
     *  Function get the value of dept location
     *  @return returns the value of dept location that data type is string
     */
    string GetDeptLocation();

    /** @brief Function set the value for dept location
     *  
     *  Function set the value for dept location
     *  @return not return
     */
    void SetDeptLocation(int DLoca);

    /** @brief Function convert the dept location object to json
     *  
     *  Function convert the dept location object to json
     *  @return a json of dept location
     */
    json ToJson();
};

#endif