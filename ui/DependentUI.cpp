#include "DependentUI.h"
#include <iostream>

void DependentUI::Add()
{
    cout << "Add a WorkOn: ";
    int id;
    long essn;
    string dependentName;
    char sex;
    string bDate;
    string relationship;
    cout << "Please! Enter Dependent infor: ";

    cout << "Enter ESSN: ";
    cin >> essn;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter Dependent Name: ";
    cin >> dependentName;

    cout << "Enter Sex: ";
    cin >> sex;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    cout << "Enter Birth Date: ";
    cin >> bDate;

    cout << "Enter Relationship: ";
    cin >> relationship;

    Dependent dependent(essn, dependentName, sex, bDate, relationship);

    BaseObject *baseObject = new Dependent();
    baseObject = &dependent;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("dependent_data.txt");
}

void DependentUI::Delete()
{
    cout << "Delete Dependent: ";
    int iD;
    cout << "Please! Enter Dependent id: ";
    cin >> iD;

    cout << "do you want to delete " << iD;
    cout << "y/n";

    char c;
    cin >> c;

    if (c == 'y')
    {
        dataAccess->DeleteData(iD);
        dataAccess->ExportToFile("dependent_data.txt");
    }
}

void DependentUI::Update()
{
    int id;
    long essn;
    string dependentName;
    char sex;
    string bDate;
    string relationship;

    cout << "Enter Dependent ID for update: ";
    cin >> id;

    cout << "Enter Dependent infor: ";

    cout << "Enter ESSN: ";
    cin >> essn;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter Dependent Name: ";
    cin >> dependentName;

    cout << "Enter Dependent sex: ";
    cin >> sex;

    cout << "Enter Dependent birth date: ";
    cin >> bDate;

    cout << "Enter Dependent relationship: ";
    cin >> relationship;

    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    Dependent *d = new Dependent(essn, dependentName, sex, bDate, relationship);

    dataAccess->UpdateData(id, d);
    dataAccess->ExportToFile("dependent_data.txt");
}

void DependentUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void DependentUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}

void DependentUI::GetDependentSonOrDaughter()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        if (((Dependent *)bo)->GetRelationship() == "son" || ((Dependent *)bo)->GetRelationship() == "daughter")
        {
            cout << bo->ToString() << endl;
        }
    }
}