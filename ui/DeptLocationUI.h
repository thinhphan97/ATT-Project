#ifndef _Project_ui_DeptLocationUI_h
#define _Project_ui_DeptLocationUI_h
#include "BaseUI.h"
#include <string>
#include <iostream>
#include "../dataaccess/DeptLocationData.h"
#include "../businessobject/DeptLocation.h"
#include "../dataaccess/DataAccess.h"

using namespace std;

class DeptLocationUI : public BaseUI
{

    DataAccess *dataAccess = new DeptLocationData("dept_location.txt");

public:
    void Add() override;
    void Delete() override;
    void Update() override;
    void GetAllData() override;
    void GetByID() override;
};

#endif