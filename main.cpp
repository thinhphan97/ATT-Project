#include <iostream>
#include <string>

#include "businessobject/BaseObject.h"
#include "businessobject/Employee.h"
#include "businessobject/Department.h"
#include "businessobject/Project.h"
#include "businessobject/WorkOn.h"
#include "businessobject/Dependent.h"
#include "businessobject/DeptLocation.h"

#include "dataaccess/DataAccess.h"
#include "dataaccess/EmployeeData.h"
#include "dataaccess/DepartmentData.h"
#include "dataaccess/DeptLocationData.h"
#include "dataaccess/ProjectData.h"
#include "dataaccess/DependentData.h"
#include "dataaccess/WorkOnData.h"

#include "ui/BaseUI.h"
#include "ui/EmployeeUI.h"
#include "ui/DepartmentUI.h"
#include "ui/DeptLocationUI.h"
#include "ui/ProjectUI.h"
#include "ui/DependentUI.h"
#include "ui/WorkOnUI.h"
#include "ui/OtherUI.h"

using namespace std;

int main()
{
    while (1)
    {

        BaseUI *projectUI = new ProjectUI();
        BaseUI *deptLocationUI = new DeptLocationUI();
        BaseUI *workOnUI = new WorkOnUI();
        BaseUI *dependentUI = new DependentUI();
        BaseUI *employeeUI = new EmployeeUI();
        BaseUI *departmentUI = new DepartmentUI();
        OtherUI otherUI;

        cout << "MENU" << endl;
        cout << "_______________________________________" << endl;
        cout << "1. Employee." << endl;
        cout << "2. Department." << endl;
        cout << "3. Department location." << endl;
        cout << "4. Project." << endl;
        cout << "5. Works On." << endl;
        cout << "6. Dependent." << endl;
        cout << "7. Other function." << endl;
        int choose;
        cout << "please a number: " << endl;
        cin >> choose;

        switch (choose)
        {
        case 1:

            cout << "EMPLOYEE" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add employee." << endl;
            cout << "2. Edit employee." << endl;
            cout << "3. Delete employee." << endl;
            cout << "4. Select all employee." << endl;
            cout << "5. Select a employee by ID." << endl;
            cout << "0. back." << endl;
            int chooseemployee;
            cout << "please a number: " << endl;
            cin >> chooseemployee;
            switch (chooseemployee)
            {
            case 1:
                employeeUI->Add();
                break;
            case 2:
                employeeUI->Update();
                break;
            case 3:
                employeeUI->Delete();
                break;

            case 4:
                employeeUI->GetAllData();
                break;
            case 5:
                employeeUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;
        case 2:
            cout << "DEPARTMENT" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add department." << endl;
            cout << "2. Edit department." << endl;
            cout << "3. Delete department." << endl;
            cout << "4. Select all department." << endl;
            cout << "5. Select a department by ID." << endl;
            cout << "0. back." << endl;
            int choosedepartment;
            cout << "please a number: " << endl;
            cin >> choosedepartment;

            switch (choosedepartment)
            {
            case 1:
                departmentUI->Add();
                break;
            case 2:
                departmentUI->Update();
                break;
            case 3:
                departmentUI->Delete();
                break;

            case 4:
                departmentUI->GetAllData();
                break;
            case 5:
                departmentUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;
        case 3:
            cout << "DEPT LOCATION" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add deptlocation." << endl;
            cout << "2. Edit deptlocation." << endl;
            cout << "3. Delete deptlocation." << endl;
            cout << "4. Select all deptlocation." << endl;
            cout << "5. Select a deptlocation by ID." << endl;
            cout << "0. back." << endl;
            int choosedeptlocation;
            cout << "please a number: " << endl;
            cin >> choosedeptlocation;

            switch (choosedeptlocation)
            {
            case 1:
                deptLocationUI->Add();
                break;
            case 2:
                deptLocationUI->Update();
                break;
            case 3:
                deptLocationUI->Delete();
                break;

            case 4:
                deptLocationUI->GetAllData();
                break;
            case 5:
                deptLocationUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;
        case 4:
            cout << "PROJECT" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add project." << endl;
            cout << "2. Edit project." << endl;
            cout << "3. Delete project." << endl;
            cout << "4. Select all project." << endl;
            cout << "5. Select a project by ID." << endl;
            cout << "0. back." << endl;
            int chooseproject;
            cout << "please a number: " << endl;
            cin >> chooseproject;

            switch (chooseproject)
            {
            case 1:
                projectUI->Add();
                break;
            case 2:
                projectUI->Update();
                break;
            case 3:
                projectUI->Delete();
                break;

            case 4:
                projectUI->GetAllData();
                break;
            case 5:
                projectUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;

        case 5:
            cout << "WORKS-ON" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add works on." << endl;
            cout << "2. Edit works on." << endl;
            cout << "3. Delete works on." << endl;
            cout << "4. Select all works on." << endl;
            cout << "5. Select a works on by ID." << endl;
            cout << "0. back." << endl;
            int chooseworkon;
            cout << "please a number: " << endl;
            cin >> chooseworkon;

            switch (chooseworkon)
            {
            case 1:
                workOnUI->Add();
                break;
            case 2:
                workOnUI->Add();
                break;
            case 3:
                workOnUI->Delete();
                break;

            case 4:
                workOnUI->GetAllData();
                break;
            case 5:
                workOnUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;

        case 6:
            cout << "DEPENDENTUI" << endl;
            cout << "_______________________________________" << endl;
            cout << "1. Add dependent." << endl;
            cout << "2. Edit dependent." << endl;
            cout << "3. Delete dependent." << endl;
            cout << "4. Select all dependent." << endl;
            cout << "5. Select a dependent by ID." << endl;
            cout << "0. back." << endl;
            int choosedependentUI;
            cout << "please a number: " << endl;
            cin >> choosedependentUI;

            switch (choosedependentUI)
            {
            case 1:
                dependentUI->Add();
                break;
            case 2:
                dependentUI->Update();
                break;
            case 3:
                dependentUI->Delete();
                break;

            case 4:
                dependentUI->GetAllData();
                break;
            case 5:
                dependentUI->GetByID();
                break;
            default:
                chooseemployee = 0;
            }
            break;
            // code block

        case 7:
            cout << "OTHER FUNTION" << endl;
            cout << "_______________________________________" << endl;
            cout << "1.Select employee is being supervised ." << endl;
            cout << "2. Select employee have dependent is daughter or son." << endl;
            cout << "3. Selecy name and sum time of project." << endl;
            cout << "4. Employees are not part of any project.." << endl;
            cout << "5. Department name and average salary." << endl;
            cout << "6. Average salary of all employees by gender." << endl;
            cout << "7. list the last names of all managers of the department but not dependent." << endl;
            cout << "8. the names of all employees in a department and work for a particular project with the minimum number of hours." << endl;

            int chooseother;
            cout << "please a number: " << endl;
            cin >> chooseother;

            switch (chooseother)
            {
            case 1:
                otherUI.GetEmployeeBySupervised();
                break;
            case 2:
                otherUI.GetEmployeeHaveSonOrDaughter();
                break;
            case 3:
                otherUI.GetNameProjectAndTime();
                break;

            case 4:
                otherUI.GetEmployeeNoProject();
                break;
            case 5:
                otherUI.DivisionAverageSalary();
                break;

            case 6:
                otherUI.AverageSalaryByDepartment();
                break;

            case 7:
                otherUI.DisplayManangerNoDependent();
                break;
            case 8:
                otherUI.DisplayEmployProjectDepart();
                break;
            default:
                chooseemployee = 0;
            }
            break;
        }
    }
}