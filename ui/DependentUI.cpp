#include "DependentUI.h"
#include <iostream>

void DependentUI::Add()
{
    cout << "Add a Dependent: " << endl;
    int id;
    long essn;
    string dependentName;
    char sex;
    string bDate;
    string relationship;
    cout << "Please! Enter Dependent infor: " << endl;

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

    // create a dependent
    Dependent dependent(essn, dependentName, sex, bDate, relationship);

    BaseObject *baseObject = new Dependent(); // create a BaseObject pointer
    baseObject = &dependent;                  //assigned baseObject by dependent address

    dataAccess->AddData(baseObject);                // add baseObject to vector
    dataAccess->ExportToFile("Database/dependent_data.txt"); //write object to file
}

void DependentUI::Delete()
{
    cout << "Delete Dependent: " << endl;
    int iD;
    cout << "Please! Enter Dependent id: ";
    cin >> iD;

    cout << "do you want to delete:  " << iD << endl;
    cout << "y/n";

    char c;
    cin >> c;
    // choose yes or no
    if (c == 'y')
    {
        dataAccess->DeleteData(iD);                     //delete object in vector
        dataAccess->ExportToFile("Database/dependent_data.txt"); //write to file
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

    cout << "Enter Dependent infor: "<<endl;

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

    // create a  Dependent pointer
    Dependent *d = new Dependent(essn, dependentName, sex, bDate, relationship);

    dataAccess->UpdateData(id, d);                  //edit object in vector
    dataAccess->ExportToFile("Database/dependent_data.txt"); //write to file
}

void DependentUI::GetAllData()
{
    // create a BaseObject pointor vector
    vector<BaseObject *> data = dataAccess->GetAllData();

    // print the objects in the vector
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

    // create a BaseObject pointor
    BaseObject *baseObject = dataAccess->GetByID(iD);

    // print the objects
    cout << baseObject->ToString() << endl;
}

void DependentUI::GetDependentSonOrDaughter()
{
    // create a BaseObject pointor vector
    DependentData *dependentData;
    vector<BaseObject *> data = dependentData->GetDependentSonOrDaughter();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}