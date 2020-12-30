#include "EmployeeData.h"
#include <fstream>
#include "../libs/json.hpp"
#include <iostream>
using json = nlohmann::json;

EmployeeData::EmployeeData(){
    _MaxId = 0;
    _data.resize(0);
};
EmployeeData::EmployeeData(string file_name,Employee e){
    _MaxId = 0;
    _data.resize(0);
    ifstream inFile(file_name);
    const int maxSize = 255;
    char buff[maxSize];
    while (inFile.getline(buff,maxSize)){
        json j = json::parse(buff);

        Employee p(
            j["Id"],
            j["Fname"],
            j["Minit"],
            j["Lname"],
            j["SSN"],
            j["Bdate"],
            j["Adress"],
            ((string)j["Sex"])[0],
            j["Salary"],
            j["SuperSSN"],
            j["DNO"] 
            );
        p.SetId(j["Id"]);
        _data.push_back(p);
        _MaxId= j["Id"];
    }
    inFile.close();
    e.SetId(++_MaxId);
    _DataAdd = e;  
};

int EmployeeData::AddData(){
    
    _data.push_back(_DataAdd);
    cout<<"push finish"<< endl;
    return _MaxId;
}

int EmployeeData::DeleteData(){
    return 0;
}
int EmployeeData::UpdateData(){
    return 0;
}
int EmployeeData::SelectAllData(){
    return 0;
}
int EmployeeData::SelectData(){
    return 0;
}
int EmployeeData::GetMaxId(){
    return _MaxId;
}
