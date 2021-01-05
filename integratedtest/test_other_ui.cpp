#include <iostream>
#include "../businessobject/DeptLocation.h"
#include "../businessobject/Project.h"
#include "../dataaccess/DeptLocationData.h"
#include "../dataaccess/ProjectData.h"
#include "../businessobject/BaseObject.h"
#include "../ui/DeptLocationUI.h"
#include "../ui/BaseUI.h"
#include "../ui/ProjectUI.h"

#include "../ui/WorkOnUI.h"
#include "../dataaccess/WorkOnData.h"
#include "../businessobject/WorkOn.h"

#include "../ui/DependentUI.h"
#include "../dataaccess/DependentData.h"
#include "../businessobject/Department.h"

#include "../ui/EmployeeUI.h"
#include "../dataaccess/EmployeeData.h"
#include "../businessobject/Employee.h"


#include "../ui/DepartmentUI.h"
#include "../dataaccess/DepartmentData.h"
#include "../businessobject/Department.h"

#include "../ui/OtherUI.h"
using namespace std;

int main()
{
  //BaseUI *baseUI = new ProjectUI();
  //BaseUI *baseUI = new DeptLocationUI();
  //BaseUI *baseUI = new WorkOnUI();
  //BaseUI *baseUI = new DependentUI();
  // BaseUI *baseUI = new EmployeeUI();
   // BaseUI *baseUI = new DepartmentUI();
  //DependentUI dependentUI;

  OtherUI otherUI;

  //otherUI.GetEmployeeBySupervised();
  otherUI.GetEmployeeHaveSonOrDaughter();

  //baseUI->GetByID();

  // baseUI->Add();

  //baseUI->Delete();

  // baseUI->Update();
 // baseUI->GetAllData();

 // dependentUI.GetDependentSonOrDaughter();
}//