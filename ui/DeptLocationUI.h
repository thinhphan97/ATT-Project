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

    DataAccess *dataAccess = new DeptLocationData("Database/dept_location.txt");

public:
    /** @brief Function for add a object 
     * Function for add a object 
     *  @return not return
     */
    void Add() override;
    /** @brief Function for Delete a object 
     *  Function for Delete a object
     *  @return not return
     */
    void Delete() override;
    /** @brief Function for edit a object 
     *  Function for edit a object 
     *  @return not return
     */
    void Update() override;
    /** @brief Function for Get all object 
     *  Function for Get all object 
     *  @return not return
     */
    void GetAllData() override;
    /** @brief Function for Get By ID a object 
     *  Function for Get By ID a object 
     *  @return not return
     */
    void GetByID() override;
};

#endif