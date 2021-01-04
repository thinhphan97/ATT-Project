#ifndef _dependent_final_businessobject_Dependent_h
#define _dependent_final_businessobject_Dependent_h

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

    /** @brief Function is constructor with 5 parameters
     *  
     *  Function is constructor with parameters
     *  @return not return
     */

    Dependent(long essn, string dependentName, char sex, string bDay, string relationship);

    /** @brief Function is constructor with 6 parameters
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

    /** @brief Function get the value of dependent id
     *  
     *  Function get the value of dependent id
     *  @return returns the value of dependent id that data type is int
     */
    int GetID();

    /** @brief Function set the value for dependent id
     *  
     *  Function set the value for dependent id
     *  @return not return
     */
    void SetID(int dependentID);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  dependent number
     *  @return returns the value of  dependent number that data type is int
     */
    long GetESSN();

    /** @brief Function set the value for dependent name
     *  
     *  Function set the value for dependent number
     *  @return not return
     */
    void SetESSN(long essn);

    /** @brief Function get the value of ESSN
     *  
     *  Function get the value of  dependent number
     *  @return returns the value of  dependent number that data type is int
     */
    string GetDependentName();

    /** @brief Function set the value for dependent name
     *  
     *  Function set the value for dependent number
     *  @return not return
     */
    void SetDependentName(string DependentName);

    /** @brief Function get the value of depedent sex
     *  
     *  Function get the value of depedent sex
     *  @return returns the value of  dependent number that data type is int
     */
    char GetSex();

    /** @brief Function set the value for depedent sex
     *  
     *  Function set the value for depedent sex
     *  @return 
     */
    void SetSex(char sex);

    /** @brief Function get the value of dependent birthdate
     *  
     *  Function get the value of dependent birthdate
     *  @return not return
     */

    string GetBDate();

    /** @brief Function set the value for dependent nabirthdateme
     *  
     *  Function set the value for dependent birthdate
     *  @return not return
     */
    void SetBDate(string bDate);

    /** @brief Function get the relationship
     *  
     *  Function get the value of  dependent relationship
     *  @return a string value of dependent relationship
     */
    string GetRelationship();

    /** @brief Function set the value for dependent relationship
     *  
     *  Function set the value for dependent relationship
     *  @return not return
     */
    void SetRelationship(string relationship);

    /** @brief Function convert the dependent object to string
     *  Function convert the dependent object to string
     *  @return a string of dependent
     */
    string ToString();
};
#endif