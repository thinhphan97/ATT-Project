#include "ProjectUI.h"
#include <iostream>

void ProjectUI::Add()
{
    cout << "Add a Project: "<<endl;
    int ID;
    string PName;
    int PNumber;
    string PLocation;
    int DNum;
    cout << "Please! Enter Project infor. "<<endl;

    cout << "Enter Project PName: ";
    cin >> PName;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter Project PNumber: ";
    cin >> PNumber;

    cout << "Enter Project PLocation: ";
    // cin >> PLocation;
    std::cin.ignore();
    getline(cin, PLocation);

    cout << "Enter Project DNum: ";
    cin >> DNum;

    Project project(PName, PNumber, PLocation, DNum);

    BaseObject *baseObject = new Project();
    baseObject = &project;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("Database/project_data.txt");
}

void ProjectUI::Delete()
{
    cout << "Delete Project: ";
    int iD;
    cout << "Please! Enter Project id: ";
    cin >> iD;

    cout << "do you want to delete " << iD;
    cout << "y/n";

    char c;
    cin >> c;

    if (c == 'y')
    {
        dataAccess->DeleteData(iD);
        dataAccess->ExportToFile("Database/project_data.txt");
    }
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

    dataAccess->ExportToFile("Database/project_data.txt");
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