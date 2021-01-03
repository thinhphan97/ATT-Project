#ifndef _Project_ui_DependentUI_h
#define _Project_ui_DependentUI_h
#include "BaseUI.h"
#include <string>
#include <iostream>
#include "../dataaccess/DependentData.h"
#include "../businessobject/Dependent.h"
#include "../dataaccess/DataAccess.h"

using namespace std;

class DependentUI : public BaseUI
{

    DataAccess *dataAccess = new DependentData("dependent_data.txt");

public:
    void Add() override;
    void Delete() override;
    void Update() override;
    void GetAllData() override;
    void GetByID() override;
    void GetDependentSonOrDaughter();
};

#endif