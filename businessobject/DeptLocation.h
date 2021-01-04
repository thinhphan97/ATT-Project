#ifndef _project_final_businessobject_DeptLocation_h
#define _project_final_businessobject_DeptLocation_h

#include <string>
#include "BaseObject.h"
#include <iostream>

using namespace std;

class DeptLocation : public BaseObject
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

    /** @brief Function is constructor with 2 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    DeptLocation(int dNumber, string dLocation);

    /** @brief Function is constructor with 3 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    DeptLocation(int deptLocationID, int dNumber, string dLocation);

    /** @brief Function is default deconstructor
     *  
     *  Function is default deconstructor
     *  @return not return
     */
    ~DeptLocation();

    /** @brief Function get the value of department location id
     *  
     *  Function get the value of department location id
     *  @return returns the value of department location id that data type is int
     */
    int GetID() override;

    /** @brief Function set the value for department location id
     *  
     *  Function set the value for department location id
     *  @return not return
     */
    void SetID(int deptLocationID);

    /** @brief Function get the value of department location number
     *  
     *  Function get the value of department location number
     *  @return returns the value of department location number that data type is int
     */
    int GetDeptLocationNumber();

    /** @brief Function set the value for department location number
     *  
     *  Function set the value for department location number
     *  @return not return
     */
    void SetDeptLocationNumber(int dNumber);

    /** @brief Function set the value for department location
     *  
     *  Function set the value for department location
     *  @return not return
     */
    void SetDeptLocation(string dLocation);

    /** @brief Function get the value of department location
     *  
     *  Function get the value of department location
     *  @return returns the value of department location that data type is string
     */
    string GetDeptLocation();

    /** @brief Function convert the department location object to string
     *  
     *  Function convert the department location object to json
     *  @return a string of department location
     */

    string ToString() override;
};

#endif