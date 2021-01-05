#ifndef _Project_ui_OtherUI_h
#define _Project_ui_OtherUI_h

#include "../dataaccess/EmployeeData.h"
#include "../dataaccess/DependentData.h"
#include "../dataaccess/ProjectData.h"
#include "../dataaccess/WorkOnData.h"
#include "../dataaccess/DepartmentData.h"

class OtherUI
{
    EmployeeData *employeeData = new EmployeeData("employee_data.txt");
    DependentData *dependentData = new DependentData("dependent_data.txt");
    ProjectData *projectData = new ProjectData("project_data.txt");
    WorkOnData *workOnData = new WorkOnData("work_on_data.txt");

public:
    /** @brief Function get the names of all employees in a department and work for a particular project with the minimum number of hours 
     *  Function get the names of all employees in a department and work for a particular project with the minimum number of hours 
     *  @return not return
     */
    void GetEmployeeBySupervised();
    /** @brief Function get all employee name have son or daughter
     *  Function get all employee name have son or daughter
     *  @return not return
     */
    void GetEmployeeHaveSonOrDaughter();
    /** @brief get the name project and sum time of all employee 
     *  get the name project and sum time of all employee 
     *  @return not return
     */
    void GetNameProjectAndTime();
    /** @brief Function for Delete a object 
     *  Function for Delete a object
     *  @return not return
     */
    void GetEmployeeNoProject();

    //void GetEmployeeBySupervised();

    /** @brief fucntion calculate the average income of employee by sex
     *  user will enter the sex (fermale or male)
     *  @return average income corerresponding with the sex
     *  variable count contain the number of male of female
     *  Using a for loop in class Employee locate the sex coincide to the sex we entered
     *  if the sex is the same then increase the count by 1 then add the Salary of that employee
    */
    void DivisionAverageSalary();
    /** @brief Function display average salary of all employees in department
     * Function display average salary of all employees in department
     * Function as the parameter is string variable
     * After loop through each element at class DepartmentData, we get pnumber variable
     * We check, if pnumber = 0, return there is no department you typed, please type again.
     * else we loop through each element at class EmployeeData, we get average variable
    */
    void AverageSalaryByDepartment();
    /** @brief Function display the last name of all manager don't have dependent.
     *  Take manager's SSN in department sheet to compare with employee's SSN of dependent sheet.
     *  If not found, get the last name of manager in employee sheet then display it.
     *  @return no return
     */
    void DisplayManangerNoDependent();
    /** @brief function display all employee in department, project and min hours entered form the keyboard
     * function display all employee in department, project and min hours entered form the keyboard
     * User enter according to the instructions displayed by the system
     * After loop through each element at class ProjectData, we get pnumber variable and dumber 
     * After loop through each element at class WorksonData The system returns a vector containing the SSNs 
     * that satisfy the project and work time conditions Then the elements in the vector find the conditions 
     * that satisfy the ssn and the part number in the employee copy and display it to the user.
    */
    void DisplayEmployProjectDepart();
};

#endif