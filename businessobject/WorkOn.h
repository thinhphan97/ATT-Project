#ifndef _project_final_businessobject_WorkOn_h
#define _project_final_businessobject_WorkOn_h

#include <string>
#include "BaseObject.h"

using namespace std;

class WorkOn : public BaseObject
{
private:
    int WorkOnID; // WorkOn ID
    long ESSN;    // Employee code
    int PNO;      // project Number
    float Hours;  // Hours for project

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    WorkOn();

    /** @brief Function is constructor with 2 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    WorkOn(long essn, int pno, float hours);

    /** @brief Function is constructor with 3 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    WorkOn(int workOnID, long essn, int pno, float hours);

    /** @brief Function is default deconstructor
     *  Function is default deconstructor
     *  @return not return
     */
    ~WorkOn();

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
    void SetID(int projectID);

    /** @brief Function get the value of 
     *  
     *  Function get the value of ESSN
     *  @return returns the value of  project number that data type is int
     */
    long GetESSN();

    /** @brief Function set the value for ESSN
     *  
     *  Function set the value for ESSN
     *  @return not return
     */
    void SetESSN(long essn);

    /** @brief Function get the value of Project Number
     *  
     *  Function get the value of Project Number
     *  @return returns the value of  project number that data type is int
     */
    int GetPNO();

    /** @brief Function set the value for Project Number
     *  
     *  Function set the value for project number
     *  @return not return
     */
    void SetPNO(int pno);

    /** @brief Function set the value for project time
     *  
     * Function set the value for project time
     *  @return returns the value of  project number that data type is int
     */
    float GetHours();

    /** @brief Function set the value for project time
     *  
     * Function set the value for project time
     *  @return not return
     */
    void SetHours(float hours);

    /** @brief Function convert the project object to string
     *  Function convert the project object to string
     *  @return a json of project
     */
    string ToString();
};
#endif