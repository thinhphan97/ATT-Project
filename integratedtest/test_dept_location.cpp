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

using namespace std;

int main()
{
  //BaseUI *baseUI = new ProjectUI();
  //BaseUI *baseUI = new DeptLocationUI();
  //BaseUI *baseUI = new WorkOnUI();
  BaseUI *baseUI = new DependentUI();
  DependentUI dependentUI;

  //baseUI->GetByID();

 // baseUI->Add();

  //baseUI->Delete();

  // baseUI->Update();
  //baseUI->GetAllData();

  dependentUI.GetDependentSonOrDaughter();
}