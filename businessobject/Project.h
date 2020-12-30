#ifndef _businessobject_Project_h
#define _businessobject_Project_h

#include <string>
#include "../libs/json.hpp"

using namespace std;
using json = nlohmann::json;

class Project
{
private:
    int ProjectID;    // Project ID
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
    Project(int id, int PNum, string PLoca, int Dnum);

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
    void SetProjectID(int id);

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
    void SetProjectNumber(int DNum);

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
    void SetProjectLocation(string DLoca);

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
    void SetDNum(int Dnum);

    /** @brief Function convert the project object to json
     *  
     *  Function convert the project object to json
     *  @return a json of project
     */
    json ToJson();
};

#endif