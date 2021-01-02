#include <iostream>
#include "../businessobject/DeptLocation.h"
#include "../businessobject/Project.h"
#include "../dataaccess/DeptLocationData.h"
#include "../dataaccess/ProjectData.h"
#include "../businessobject/BaseObject.h"
#include "../ui/DeptLocationUI.h"
#include "../ui/BaseUI.h"
#include "../ui/ProjectUI.h"

using namespace std;

int main()
{
    BaseUI *baseUI = new ProjectUI();

    baseUI->GetByID();

    //  baseUI->Add();

    // baseUI->Delete();

    // baseUI->Update();
    //   baseUI -> GetAllData();


    // DeptLocation d(1, "da nang");
    // DeptLocation d1(3, "ha tinh");
    // DeptLocation d1(2, "hatinh");

    // BaseUI *baseUI = new DeptLocationUI();
    // dtAccess1 = &d;
    // BaseObject *dtAccess2 = new DeptLocation();
    // dtAccess2 = &d1;

    // DataAccess *data1 = new DeptLocationData();

    // cout << data1->AddData(dtAccess1) << endl;

    // cout << data1->AddData(dtAccess2);

    // // data1->AddData(&d1);

    // Project p(1, "danang", 2);
    // Project p1(2, "ha tinh", 3);
    // // DeptLocation d1(2, "hatinh");
    // BaseObject *dtAccess3 = new Project();
    // dtAccess3 = &p;
    // BaseObject *dtAccess4 = new Project();
    // dtAccess4 = &p1;

    // DataAccess *data2 = new ProjectData();

    // cout << data2->AddData(dtAccess3) << endl;

    // cout << data2->AddData(dtAccess4);

    // data1->PullFile("dept_location.txt");
}