#ifndef _Project_ui_BaseUI_h
#define _Project_ui_BaseUI_h

#include <string>
#include <iostream>
#include <iomanip>
#include "../dataaccess/DeptLocationData.h"
#include "../businessobject/DeptLocation.h"
#include "../dataaccess/DataAccess.h"

#include <string>

using namespace std;

class BaseUI
{

public:
    /** @brief Function is virtual funtion for add a object 
     * Function is virtual funtion for add a object 
     *  @return not return.
     */
    virtual void Add() = 0;
    /** @brief Function is virtual funtion for Delete a object 
     *  Function is virtual funtion for Delete a object
     *  @return not return.
     */
    virtual void Delete() = 0;
    /** @brief Function is virtual funtion for edit a object 
     *  Function is virtual funtion for edit a object 
     *  @return not return.
     */
    virtual void Update() = 0;
    /** @brief Function is virtual funtion for Get all object 
     *  Function is virtual funtion for Get all object 
     *  @return not return.
     */
    virtual void GetAllData() = 0;
    /** @brief Function is virtual funtion for Get By ID a object 
     *  Function is virtual funtion for Get By ID a object 
     *  @return not return.
     */
    virtual void GetByID() = 0;
};

#endif