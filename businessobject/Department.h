#ifndef _project_final_businessobject_Department_h
#define _project_final_businessobject_Department_h

#include <string>
#include "BaseObject.h"

using namespace std;

class Department : public BaseObject
{
private:
    int Id;
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    Department();

    /** @brief Function is constructor with 2 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Department(int id, string dname, int dnumber, long mgrssn, string mgrstartdate);

    /** @brief Function is constructor with 3 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    Department(string dname, int dnumber, long mgrssn, string mgrstartdate);

    /** @brief Function is default deconstructor
     *  Function is default deconstructor
     *  @return not return
     */
    ~Department();

    /** @brief Function get the value of project id
     *  
     *  Function get the value of project id
     *  @return returns the value of project id that data type is int
     */
    int GetID();

    /** @brief Function set the value for project id
     *  
     *  Function set the value for project id
     *  @return not return
     */
    void SetID(int id);

    /** @brief Function get the value of DName
     *  
     *  Function get the value of DName
     *  @return returns the value of  DName that data type is string
     */
    string GetDName();
    /** @brief Function set the value for DName
     *  
     *  Function set the value for DName
     *  @return not return
     */
    void SetDName(string);
    /** @brief Function get the value of DNumber
     *  
     *  Function get the value of DNumber
     *  @return returns the value of  DNumber that data type is int
     */
    int GetDNumber();
    /** @brief Function set the value for DNumber
     *  
     *  Function set the value for DNumber
     *  @return not return
     */
    void SetDNumber(int);
    /** @brief Function get the value of MgrSSN
     *  
     *  Function get the value of MgrSSN
     *  @return returns the value of MgrSSN that data type is long
     */
    long GetMgrSSN();
     /** @brief Function set the value for MgrSSN
     *  
     *  Function set the value for MgrSSN
     *  @return not return
     */
    void SetMgrSSN(long);
    /** @brief Function get the value of MgrStartDate
     *  
     *  Function get the value of MgrStartDate
     *  @return returns the value of  project number that data type is string
     */
    string GetMgrStartDate();
    /** @brief Function set the value for MgrStartDate
     *  
     *  Function set the value for MgrStartDate
     *  @return not return
     */
    void SetMgrStartDate(string);

    /** @brief Function convert the project object to string
     *  Function convert the project object to string
     *  @return a json of project
     */
    string ToString();
};
#endif