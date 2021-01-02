#ifndef _Project_ui_BaseUI_h
#define _Project_ui_BaseUI_h

#include <string>
#include <iostream>
#include "../dataaccess/DeptLocationData.h"
#include "../businessobject/DeptLocation.h"
#include "../dataaccess/DataAccess.h"

#include <string>

using namespace std;

class BaseUI
{

public:
    virtual void Add();
    virtual void Delete();
    virtual void Update();
    virtual void GetAllData();
    virtual void GetByID();
};

#endif