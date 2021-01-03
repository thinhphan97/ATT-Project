#ifndef _project_final_businessobject_Dependent_h
#define _project_final_businessobject_Dependent_h

#include <string>
#include "BaseObject.h"

using namespace std;

class Dependent : public BaseObject
{
private:
    int DependentID; // Dependent ID
    long ESSN;
    string DependentName; //
    char Sex;             // Dependent sex
    string BDate;
    string Relationship; // WorkOn Hours

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    Dependent();

    /** @brief Function is constructor with 2 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Dependent(long essn, string dependentName, char sex, string bDay, string relationship);

    /** @brief Function is constructor with 3 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    Dependent(int dependentID, long essn, string dependentName, char sex, string bDay, string relationship);

    /** @brief Function is default deconstructor
     *  Function is default deconstructor
     *  @return not return
     */
    ~Dependent();

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
    void SetID(int dependentID);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    long GetESSN();

    /** @brief Function set the value for project name
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetESSN(long essn);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    string GetDependentName();

    /** @brief Function set the value for project name
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetDependentName(string DependentName);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    char GetSex();

    /** @brief Function set the value for project name
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetSex(char sex);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    string GetBDate();

    /** @brief Function set the value for project name
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetBDate(string bDate);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    string GetRelationship();

    /** @brief Function set the value for project name
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetRelationship(string relationship);

    /** @brief Function convert the project object to string
     *  Function convert the project object to string
     *  @return a json of project
     */
    string ToString();
};
#endif