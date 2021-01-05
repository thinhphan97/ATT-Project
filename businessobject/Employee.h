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

    /** @brief Function is constructor with 10 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Employee(string fname, string minit, string lname, long ssn, string bdate, string adress, char sex, int salary, long superSSN, int dno);

    /** @brief Function is constructor with 11 parameters
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

    /** @brief Function get the value of id
     *  
     *  Function get the value of id
     *  @return returns the value of project id that data type is int
     */
    int GetID();

    /** @brief Function set the value for id
     *  
     *  Function set the value for id
     *  @return not return
     */
    void SetID(int id);

    /** @brief Function get the value of FName
     *  
     *  Function get the value of FName
     *  @return returns the value of  FName that data type is string
     */
    string GetFName();

    /** @brief Function set the value for FName
     *  
     *  Function set the value for FName
     *  @return not return
     */
    void SetFName(string fname);
    /** @brief Function get the value of MInit  
     *  
     *  Function get the value of MInit
     *  @return returns the value of MInit that data type is string
     */
    string GetMInit();

    /** @brief Function set the value for MInit
     *  
     *  Function set the value for MInit
     *  @return not return
     */
    void SetMInit(string minit);
    /** @brief Function get the value of LName
     *  
     *  Function get the value of LName
     *  @return returns the value of  LName that data type is string
     */
    string GetLName();
    /** @brief Function set the value for LName
     *  
     *  Function set the value for LName
     *  @return not return
     */
    void SetLName(string lname);
    /** @brief Function get the value of SSN
     *  
     *  Function get the value of SSN
     *  @return returns the value of SSN that data type is long
     */
    long GetSSN();
    /** @brief Function set the value for SSN
     *  
     *  Function set the value for SSN
     *  @return not return
     */
    void SetSSN(long ssn);
    /** @brief Function get the value of BDate
     *   
     *  Function get the value of BDate
     *  @return returns the value of  BDate that data type is string
     */
    string GetBDate();
    /** @brief Function set the value for BDate
     *  
     *  Function set the value for BDate
     *  @return not return
     */
    void SetBDate(string bdate);
    /** @brief Function get the value of Adress
     *  
     *  Function get the value of Adress
     *  @return returns the value of Adress that data type is string
     */
    string GetAdress();
    /** @brief Function set the value for Adress
     *  
     *  Function set the value for Adress
     *  @return not return
     */
    void SetAdress(string address);
    /** @brief Function get the value of Sex
     *  
     *  Function get the value of Sex
     *  @return returns the value of  Sex that data type is char
     */
    char GetSex();
    /** @brief Function set the value for Sex
     *  
     *  Function set the value for Sex
     *  @return not return
     */
    void SetSex(char sex);
    /** @brief Function get the value of Salary
     *  
     *  Function get the value of Salary
     *  @return returns the value of  Salary that data type is int
     */
    int GetSalary();
    /** @brief Function set the value for Salary
     *  
     *  Function set the value for Salary
     *  @return not return
     */
    void SetSalary(int salary);
    /** @brief Function get the value of SuperSSN
     *  
     *  Function get the value of SuperSSN
     *  @return returns the value of SuperSSN that data type is long
     */
    long GetSuperSSN();
    /** @brief Function set the value for SuperSSN
     *  
     *  Function set the value for SuperSSN
     *  @return not return
     */
    void SetSuperSSN(long supperssn);
    /** @brief Function get the value of DNO
     *  
     *  Function get the value of DNO
     *  @return returns the value of  DNO that data type is int
     */
    int GetDNO();
    /** @brief Function set the value for DNO
     *  
     *  Function set the value for DNO
     *  @return not return
     */
    void SetDNO(int dno);
    /** @brief Function convert informtion in class to string
     *  
     *  Function convert informtion in class to string
     *  @return return a string
     */
    string ToString();
};
#endif