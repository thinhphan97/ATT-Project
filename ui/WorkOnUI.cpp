#include "WorkOnUI.h"
#include <iostream>

void WorkOnUI::Add()
{
    cout << "Add a WorkOn: ";
    int id;
    long essn;
    int pno;
    float hours;
    cout << "Please! Enter WorkOn infor: ";

    cout << "Enter ESSN: ";
    cin >> essn;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter PNO: ";
    cin >> pno;

    cout << "Enter Hours: ";
    cin >> hours;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    WorkOn workOn(essn, pno, hours);

    BaseObject *baseObject = new WorkOn();
    baseObject = &workOn;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("work_on_data.txt");
}

void WorkOnUI::Delete()
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
        dataAccess->ExportToFile("work_on_data.txt");
    }
}

void WorkOnUI::Update()
{
    int id;
    long essn;
    int pno;
    float hours;

    cout << "Enter Work On ID for update: ";
    cin >> id;

    cout << "Enter Work On infor: ";

    cout << "Enter ESSN: ";
    cin >> essn;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PName);

    cout << "Enter PNO: ";
    cin >> pno;

    cout << "Enter hours: ";
    cin >> hours;
    // std::cin.ignore(32767, '\n');
    // getline(cin, PLocation);

    WorkOn *w = new WorkOn(essn, pno, hours);

    dataAccess->UpdateData(id, w);
    dataAccess->ExportToFile("work_on_data.txt");
}

void WorkOnUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void WorkOnUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}