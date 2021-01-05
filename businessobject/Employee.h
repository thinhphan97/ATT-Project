#ifndef _project_final_businessobject_Employee_h
#define _project_final_businessobject_Employee_h

#include <string>
#include "BaseObject.h"

using namespace std;

class Employee : public BaseObject
{
private:
    int Id;                     //id is increasing number
    string FName, MInit, LName; //fname, minit, lname are the full name of employee
    long SSN;                   // ssn is employee identification number
    string BDate, Adress;       // Bdate and Adress are birth day and adress of employee
    char Sex;                   //sex of the employee
    int Salary;                 // salary of the employee
    long SuperSSN;              //superSSN is the manager of the employee
    int DNO;                    //dno is Department staff are doing

public:
    /** @brief Function is default constructor
     *  
     *  Function is default constructor
     *  @return not return
     */
    Employee();

    /** @brief Function is constructor with 2 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary, long superSSN, int dno);

    /** @brief Function is constructor with 3 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */
    Employee(int id, string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary, long superSSN, int dno);

    /** @brief Function is default deconstructor
     *  Function is default deconstructor
     *  @return not return
     */
    ~Employee();

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
    string GetFName();

    /** @brief Function set the value for ESSN
     *  
     *  Function set the value for ESSN
     *  @return not return
     */
    void SetFName(string fname);

    /** @brief Function convert the project object to string
     *  Function convert the project object to string
     *  @return a json of project
     */

    string GetMInit();
    void SetMInit(string minit);
    string GetLName();
    void SetLName(string lname);
    long GetSSN();
    void SetSSN(long ssn);
    string GetBDate();
    void SetBDate(string bdate);
    string GetAdress();
    void SetAdress(string address);
    char GetSex();
    void SetSex(char sex);
    int GetSalary();
    void SetSalary(int salary);
    long GetSuperSSN();
    void SetSuperSSN(long supperssn);
    int GetDNO();
    void SetDNO(int dno);
    string ToString();
};
#endif