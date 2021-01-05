#include "EmployeeUI.h"
#include "../libs/Functionplus.h"
#include <iostream>

void EmployeeUI::Add()
{
    cout << "Add a Employee: "<<endl; //id is increasing number
    // string FName, MInit, LName; //fname, minit, lname are the full name of employee
    // long SSN;                   // ssn is employee identification number
    // string BDate, Adress;       // Bdate and Adress are birth day and adress of employee
    char Sex;                   //sex of the employee
    int Salary;                 // salary of the employee
    long SuperSSN;              //superSSN is the manager of the employee
    int DNO;
    cout << "Please! Enter Employee infor: "<<endl;
    string FName, MInit, LName; //fname, minit, lname are the full name of employee
    cout << "Enter FName: ";
    cin >> FName;

    cout << "Enter MInit: ";
    cin >> MInit;

    cout << "Enter LName: ";
    cin >> LName;
    long SSN;                   // ssn is employee identification number
    cout << "Enter SSN: ";
    cin >> SSN;
    string BDate;       // Bdate and Adress are birth day and adress of employee
    cout << "Enter BDate: ";
    cin >> BDate;
    cin.ignore();
    string Adress;
    cout << "Enter Adress: ";
    getline(cin,Adress);

    cout << "Enter Sex: ";
    cin >> Sex;

    cout << "Enter Salary: ";
    cin >> Salary;

    cout << "EnterSuperSSN: ";
    cin >> SuperSSN;

    cout << "Enter DNO: ";
    cin >> DNO;

    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);
    Adress = Functionplus::ReplaceAll(Adress,' ','_');

    Employee employee(FName, MInit, LName, SSN, BDate, Adress, Sex, Salary, SuperSSN, DNO);

    BaseObject *baseObject = new Employee();
    baseObject = &employee;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("Database/employee_data.txt");
}

void EmployeeUI::Delete()
{
    cout << "Delete Employee: ";
    int iD;
    cout << "Please! Enter Employee id: ";
    cin >> iD;

    cout << "do you want to delete " << iD;
    cout << "y/n";

    char c;
    cin >> c;

    if (c == 'y')
    {
        dataAccess->DeleteData(iD);
        dataAccess->ExportToFile("employee_data.txt");
    }
}

void EmployeeUI::Update()
{
    int id;
    string FName, MInit, LName; //fname, minit, lname are the full name of employee
    long SSN;                   // ssn is employee identification number
    string BDate, Adress;       // Bdate and Adress are birth day and adress of employee
    char Sex;                   //sex of the employee
    int Salary;                 // salary of the employee
    long SuperSSN;              //superSSN is the manager of the employee
    int DNO;

    cout << "Enter Employee ID for update: ";
    cin >> id;

    cout << "Enter Employee infor: ";
    cout << "Enter FName: ";
    cin >> FName;

    cout << "Enter MInit: ";
    cin >> MInit;

    cout << "Enter LName: ";
    cin >> LName;

    cout << "Enter SSN: ";
    cin >> SSN;

    cout << "Enter BDate: ";
    cin >> BDate;

    cout << "Enter Adress: ";
    cin >> Adress;

    cout << "Enter Sex: ";
    cin >> Sex;

    cout << "Enter Salary: ";
    cin >> Salary;

    cout << "EnterSuperSSN: ";
    cin >> SuperSSN;

    cout << "Enter DNO: ";
    cin >> DNO;

    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    Employee *e = new Employee(FName, MInit, LName, SSN, BDate, Adress, Sex, Salary, SuperSSN, DNO);

    dataAccess->UpdateData(id, e);
    dataAccess->ExportToFile("employee_data.txt");
}

void EmployeeUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void EmployeeUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}