#ifndef _businessobject_Project_h
#define _businessobject_Project_h

#include <string>
#include "BaseObject.h"

using namespace std;

class Project : public BaseObject
{
private:
    int ProjectID;    // Project ID
    string PName;
    int PNumber;      // Project Number
    string PLocation; // Project Location
    int DNum;         // Department Number

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    Project();

    /** @brief Function is constructor with parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Project(string pName, int pNumber, string pLocation, int dNum);
    Project(int projectID, string pName, int pNumber, string pLocation, int dNum);

    /** @brief Function is default deconstructor
     *  
     *  Function is default deconstructor
     *  @return not return
     */
    ~Project();

    /** @brief Function get the value of project id
     *  
     *  Function get the value of project id
     *  @return returns the value of project id that data type is int
     */
    int GetProjectID();

    /** @brief Function set the value for project id
     *  
     *  Function set the value for project id
     *  @return not return
     */
    void SetID(int projectID);



     /** @brief Function get the value of  project number
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    string GetProjectName();

    /** @brief Function set the value for project number
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetProjectName(string pName);

    /** @brief Function get the value of project location
     *  
     *  Function get the value of project location
     *  @return returns the value of project location that data type is string
     */

    /** @brief Function get the value of  project number
     *  
     *  Function get the value of  project number
     *  @return returns the value of  project number that data type is int
     */
    int GetProjectNumber();

    /** @brief Function set the value for project number
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetProjectNumber(int pNumber);

    /** @brief Function get the value of project location
     *  
     *  Function get the value of project location
     *  @return returns the value of project location that data type is string
     */
    string GetProjectLocation();

    /** @brief Function set the value for project location
     *  
     *  Function set the value for project location
     *  @return not return
     */
    void SetProjectLocation(string pLocation);

    /** @brief Function get the value of Department number
     *  
     *  Function get the value of Department number
     *  @return returns the value of Department number that data type is int
     */
    int GetDNum();

    /** @brief Function set the value for Department number
     *  
     *  Function set the value for Department number
     *  @return not return
     */
    void SetDNum(int dNum);

    /** @brief Function convert the project object to json
     *  
     *  Function convert the project object to json
     *  @return a json of project
     */
    string ToString();
};
#endif