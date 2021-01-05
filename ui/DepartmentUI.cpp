#include "DepartmentUI.h"
#include <iostream>

void DepartmentUI::Add()
{
    cout << "Add a Department: ";
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;
    cout << "Please! Enter Department infor: ";

    cout << "Enter DName: ";
    cin >> DName;

    cout << "Enter DNumber: ";
    cin >> DNumber;

    cout << "Enter MgrSSN: ";
    cin >> MgrSSN;

    cout << "Enter MgrStartDate: ";
    cin >> MgrStartDate;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    Department department(DName, DNumber, MgrSSN, MgrStartDate);

    BaseObject *baseObject = new Department();
    baseObject = &department;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("department_data.txt");
}

void DepartmentUI::Delete()
{
    cout << "Delete Work On: ";
    int iD;
    cout << "Please! Enter Work On id: ";
    cin >> iD;

    cout << "do you want to delete " << iD;
    cout << "y/n";

    char c;
    cin >> c;

    if (c == 'y')
    {
        dataAccess->DeleteData(iD);
        dataAccess->ExportToFile("department_data.txt");
    }
}

void DepartmentUI::Update()
{

    cout << "Update Department: ";
    int iD;
    cout << "Enter Department id you want to edit: ";
    cin >> iD;
    string DName;
    int DNumber;
    long MgrSSN;
    string MgrStartDate;

    cout << "Enter DName: ";
    cin >> DName;

    cout << "Enter DNumber: ";
    cin >> DNumber;

    cout << "Enter MgrSSN: ";
    cin >> MgrSSN;

    cout << "Enter MgrStartDate: ";
    cin >> MgrStartDate;

    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    Department *w = new Department(DName, DNumber, MgrSSN, MgrStartDate);

    dataAccess->UpdateData(iD, w);
    dataAccess->ExportToFile("department_data.txt");
}

void DepartmentUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void DepartmentUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}