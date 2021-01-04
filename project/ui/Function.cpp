#include "Function.h"
#include "../businessobject/Employee.h"
#include "../dataaccess/EmployeeData.h"
#include "../businessobject/Department.h"
#include "../dataaccess/DepartmentData.h"
#include "../businessobject/Dependent.h"
#include "../dataaccess/DependentData.h"
#include "../dataaccess/DataAccess.h"
#include "../businessobject/BaseObject.h"
#include "../businessobject/DeptLocation.h"
#include "../dataaccess/DeptLocationData.h"
#include "../businessobject/Project.h"
#include "../dataaccess/ProjectData.h"
#include "../businessobject/WorksOn.h"
#include "../dataaccess/WorksOnData.h"
#include "../libs/Functionplus.h"
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
void Function::function1(){
    bool current =true;
    vector<Employee> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        string FName;
        cout<<"Enter First Name :" ; cin>> FName;
        string MInit;
        cout<<"Enter Middel Init :"; cin>> MInit;
        string LName;
        cout<<"Enter Last Name:"; cin>> LName;
        long SSN;
        cout<<"Enter SSN:"; cin>> SSN;
        string BDate;
        cout<<"Enter Birthday Date :"; cin>> BDate;
        string Adress;
        cout<<"Enter Adress :"; getline(cin, Adress);
        char Sex;
        cout<<"Enter Sex :"; cin>> Sex;
        int Salary;
        cout<<"Enter Salary :"; cin>> Salary;
        long SuperSSN;
        cout<<"Enter SuperSSN :"; cin>> SuperSSN;
        int DNO;
        cout<<"Enter DNO :"; cin>> DNO;
        cout<<"____________________________________________________"<<endl;
        data.push_back(Employee(FName, MInit, LName, SSN, BDate, Adress, Sex, Salary, SuperSSN, DNO));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database Employee"<<endl;
    for(Employee d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        EmployeeData _data("Database/Employee.data");
        _data.ReadData();
        for(Employee d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function2(){
    bool current =true;
    vector<Department> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        string DName;
        cout<<"Enter Department Name :" ; cin>> DName;
        int DNumber;
        cout<<"Enter Department Number :"; cin>> DNumber;
        long MgrSSN;
        cout<<"Enter MgrSSN:"; cin>> MgrSSN;
        string MgrStartDate;
        cout<<"Enter MgrStartDate:"; cin>> MgrStartDate;
        cout<<"____________________________________________________"<<endl;
        data.push_back(Department(DName, DNumber, MgrSSN, MgrStartDate));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database of Department"<<endl;
    for(Department d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        DepartmentData _data("Database/Department.data");
        _data.ReadData();
        for(Department d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function3(){
    bool current =true;
    vector<Dependent> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        int ESSN;
        cout<<"Enter ESSN :" ; cin>> ESSN;
        string DependentName;
        cout<<"Enter DependentName :"; cin>> DependentName;
        char Sex;
        cout<<"Enter Sex:"; cin>> Sex;
        string BDate;
        cout<<"Enter BDate:"; cin>> BDate;
        string Relationship;
        cout<<"Enter Relationship :"; cin>> Relationship;
        cout<<"____________________________________________________"<<endl;
        data.push_back(Dependent(ESSN, DependentName, Sex, BDate, Relationship));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database of Depentdent"<<endl;
    for(Dependent d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        DependentData _data("Database/Depentdent.data");
        _data.ReadData();
        for(Dependent d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function4(){
    bool current =true;
    vector<Project> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        string PName;
        cout<<"Enter Project Name :" ; cin>> PName;
        int PNumber;
        cout<<"Enter Project Number :"; cin>> PNumber;
        string PLocation;
        cout<<"Enter Project location:"; cin>> PLocation;
        int DNum;
        cout<<"Enter Department Num:"; cin>> DNum;
        cout<<"____________________________________________________"<<endl;
        data.push_back(Project(PName, PNumber, PLocation, DNum));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database of Depentdent"<<endl;
    for(Project d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        ProjectData _data("Database/Project.data");
        _data.ReadData();
        for(Project d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function5(){
    bool current =true;
    vector<WorksOn> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        long ESSN;
        cout<<"Enter ESSN :" ; cin>> ESSN;
        int PNO;
        cout<<"Enter PNO :"; cin>> PNO;
        float Hours;
        cout<<"Enter Hours:"; cin>> Hours;
        cout<<"____________________________________________________"<<endl;
        data.push_back(WorksOn(ESSN, PNO, Hours));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database of Workon"<<endl;
    for(WorksOn d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        WorksOnData _data("Database/Workson.data");
        _data.ReadData();
        for(WorksOn d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function6(){
    bool current =true;
    vector<DeptLocation> data;
    int i=0;
    while(current){
        cout<< "Number "<< i << endl;
        cout<<"____________________________________________________"<<endl;
        long DNumber;
        cout<<"Enter DNumber :" ; cin>> DNumber;
        string DLocation;
        cout<<"Enter DLocation :"; cin>> DLocation;
        cout<<"____________________________________________________"<<endl;
        data.push_back(DeptLocation(DNumber, DLocation));     
        int f;
        cout<< "Enter 0 to finish :" ; cin >> f;
        if(f==0){
            current = false;
        }
    }
    cout << "Press 1 to enter the data into the database of Deptlocation"<<endl;
    for(DeptLocation d:data){
        cout<<d.ConvertToString()<<endl;
    }
    int f;
    cin>> f;
    if(f==1){
        DeptLocationData _data("Database/Workson.data");
        _data.ReadData();
        for(DeptLocation d:data){
            _data.AddData(&d);
        }
        _data.PullFile();
        data.clear();
    }
}

void Function::function7(string name){
    long ssn = -1;
    EmployeeData data("Database/Employee.data");
    data.ReadData();
    cout<< "List Employees supervised by "<< name << endl;
    int _max = data.GetMaxId();
    for(int i = 0;i<_max; i++){
        if(Functionplus::StringToUpper(data.GetData(i).GetFName()) == Functionplus::StringToUpper(name)){
            ssn = data.GetData(i).GetSSN();
        }
    }
    if(ssn==-1){
        cout << "You need to re-enter the administrator name."<<endl;
    }
    else{
        int j=0;
        for(int j = 0;j<_max; j++){
            if(data.GetData(j).GetSuperSSN()==ssn){
                cout<< data.GetData(j).GetFName()<<" "<<data.GetData(j).GetLName()<<endl;
                j++;
            }
        }
        if(j==0){
            cout << "The person you enter is an employee" << endl;
        }
    }

}

void Function::function8(){
    DependentData dd("Database/Depentdent.data");
    EmployeeData  de("Database/Employee.data");
    dd.ReadData();
    de.ReadData();
    vector<long> SSN;
    for(int i=0; i<dd.GetMaxId();i++){
        if(dd.GetData(i).GetRelationship() == "SON"||dd.GetData(i).GetRelationship() == "DAUGHTER"){
            SSN.push_back(dd.GetData(i).GetESSN());
        }
    }
    if(SSN.size() == 0){
        cout << "No employee that dependent is daughter or son";
    }else{
        sort(SSN.begin(),SSN.end());
        SSN.erase(unique(SSN.begin(), SSN.end()), SSN.end());
        for (int j = 0; j < de.GetMaxId(); j++) {
            for(long ssn:SSN){
                //cout<< ssn<<endl;
                if (de.GetData(j).GetSSN() == ssn) {
                    cout<< de.GetData(j).GetFName()<<" "<<de.GetData(j).GetLName()<<endl;
                }
            }
        }
    }
}

void Function::function9(int PNumber){
    float total=0;
    ProjectData dp("Database/Project.data");
    dp.ReadData();
    string PName = dp.GetData(PNumber).GetPName();
    cout << "Name of Project: "<< PName << ", Total work hours: ";
    WorksOnData dw("Database/Workson.data");
    dw.ReadData();
    for(int i = 0; i<dw.GetMaxId();i++){
        if(dw.GetData(i).GetPNO()==PNumber){
            total += dw.GetData(i).GetHours();
        }
    }
    if(total == 0){
        cout << "There is no project as you type. Please try again."<<endl;
    }else{
        cout << total<<endl;
    }
    
 }

void Function::function10(){
    WorksOnData dw("Database/Workson.data");
    dw.ReadData();
    vector<long> ESSN;
    for(int i=0; i<dw.GetMaxId(); i++){
        ESSN.push_back(dw.GetData(i).GetESSN());
    }
    sort(ESSN.begin(),ESSN.end());
    ESSN.erase(unique(ESSN.begin(), ESSN.end()), ESSN.end());
    EmployeeData de("Database/Employee.data");
    de.ReadData();
    if(ESSN.size()==de.GetMaxId()){
        cout<<"All staff are participating in the project"<<endl;
    }else{
        for(long ssn:ESSN){
            de.DeleteData(ssn);
        }
        for(int j = 0; j<de.GetMaxId(); j++){
            cout<< de.GetData(j).GetFName()<< " "<<de.GetData(j).GetLName() << endl;
        }
    }
}

void Function::function11(string dname){
    // DepartmentData dd("Database/Department.data");
    // dd.ReadData();
    int Dnumber = 5;
    //dd.GetData(dname).GetDNumber();
    EmployeeData de("Database/Employee.data");
    de.ReadData();
    float total=0;
    int count=0;
    for(int i=0; i < de.GetMaxId(); i++){
        if(de.GetData(i).GetDNO()==Dnumber){
            count++;
            total += de.GetData(i).GetSalary();
        }
    }
    float Avr=total/count;
    cout<<count;
    cout<<total;
    cout<<"average salary of" << dname << "department is :"<< Avr <<endl;
}