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

    /** @brief Function get the value of 
     *  
     *  Function get the value of ESSN
     *  @return returns the value of  project number that data type is int
     */
    string GetDName();
    void SetDName(string);
    int GetDNumber();
    void SetDNumber(int);
    long GetMgrSSN();
    void SetMgrSSN(long);
    string GetMgrStartDate();
    void SetMgrStartDate(string);

    /** @brief Function convert the project object to string
     *  Function convert the project object to string
     *  @return a json of project
     */
    string ToString();
};
#endif