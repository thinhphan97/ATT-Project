#ifndef _Project_ui_WorkOnUI_h
#define _Project_ui_WorkOnUI_h
#include "BaseUI.h"
#include <string>
#include <iostream>
#include "../dataaccess/WorkOnData.h"
#include "../businessobject/WorkOn.h"
#include "../dataaccess/DataAccess.h"

using namespace std;

class WorkOnUI : public BaseUI
{

    DataAccess *dataAccess = new WorkOnData("Database/work_on_data.txt");

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