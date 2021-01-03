#include "ProjectUI.h"
#include <iostream>

void ProjectUI::Add()
{
    char enter('y');
    // do
    // {
    int ID;
    string PName;
    int PNumber;
    string PLocation;
    int DNum;
    cout << "Enter Project infor: ";

    cout << "Enter Project PName: ";
    cin >> PName;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter Project DNumber: ";
    cin >> PNumber;

    cout << "Enter Project DNumber: ";
    cin >> PLocation;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    cout << "Enter Project DNumber: ";
    cin >> DNum;

    Project project(PName, PNumber, PLocation, DNum);

    BaseObject *baseObject = new Project();
    baseObject = &project;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("project_data.txt");

    // cout << "Continute ? (y/n) ";
    // cin >> enter;
    // } while (enter != 'n');
}

void ProjectUI::Delete()
{
    int iD;
    cout << "(delete)Enter Project id: ";
    cin >> iD;

    dataAccess->DeleteData(iD);
    dataAccess->ExportToFile("project_data.txt");
}

void ProjectUI::Update()
{
    int ID;
    string PName;
    int PNumber;
    string PLocation;
    int DNum;

    cout << "Enter Project ID for update: ";
    cin >> ID;

    cout << "Enter Project infor: ";

    cout << "Enter Project PName: ";

    cin >> PName;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter Project PNumber: ";
    cin >> PNumber;

    cout << "Enter Project PLocation: ";
    cin >> PLocation;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    cout << "Enter Project DNumber: ";
    cin >> DNum;

    Project *p = new Project(PName, PNumber, PLocation, DNum);
    ;

    dataAccess->UpdateData(ID, p);

    dataAccess->ExportToFile("project_data.txt");
}

void ProjectUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void ProjectUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}