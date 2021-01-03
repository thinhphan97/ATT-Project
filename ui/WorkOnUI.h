#ifndef _Project_ui_WorkOnUI_h
#define _Project_ui_WorkOnUI_h
#include "BaseUI.h"
#include <string>
#include <iostream>
#include "../dataaccess/WorkOnData.h"
#include "../businessobject/WorkOn.h"
#include "../dataaccess/DataAccess.h"

using namespace std;

class  WorkOnUI: public BaseUI
{

    DataAccess *dataAccess = new WorkOnData("work_on_data.txt");

public:
    void Add() override;
    void Delete() override;
    void Update() override;
    void GetAllData() override;
    void GetByID() override;
};

#endif