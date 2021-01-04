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
#include <string>
#include <iostream>
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
        cout<<"Enter First Name :" ; cin>> DName;
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
    cout << "Press 1 to enter the data into the database of Depentdent"<<endl;
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
