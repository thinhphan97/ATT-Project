#ifndef _Project_ui_Project_h
#define _Project_ui_Project_h
#include "BaseUI.h"
#include <string>
#include <iostream>
#include "../dataaccess/ProjectData.h"
#include "../businessobject/Project.h"
#include "../dataaccess/DataAccess.h"

using namespace std;

class ProjectUI : public BaseUI
{

    DataAccess *dataAccess = new ProjectData("project_data.txt");

public:
    void Add() override;
    void Delete() override;
    void Update() override;
    void GetAllData() override;
    void GetByID() override;
};

#endif