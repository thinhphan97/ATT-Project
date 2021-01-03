#include "DeptLocationUI.h"

void DeptLocationUI::Add()
{
    char enter('y');

    int DeptLocationsID, DNumber;
    string DLocation;
    cout << "Add a DeptLocation: ";
    cout << "Enter DeptLocation infor. please! ";

    cout << "Enter DeptLocation DNumber: ";
    cin >> DNumber;

    cout << "Enter DeptLocation DLocation: ";

    //   Xóa khỏi bộ nhớ đệm 32767 ký tự, hoặc đến khi gặp ký tự '\n'
    std::cin.ignore(32767, '\n');
    getline(cin, DLocation);

    DeptLocation deptLocation(DNumber, DLocation);

    BaseObject *baseObject = new DeptLocation();
    baseObject = &deptLocation;

    dataAccess->AddData(baseObject);
    dataAccess->ExportToFile("dept_location.txt");
}

void DeptLocationUI::Delete()
{
    int iD;
    cout << "Enter DeptLocation id: ";
    cin >> iD;

    dataAccess->DeleteData(iD);
    dataAccess->ExportToFile("dept_location.txt");
}

void DeptLocationUI::Update()
{
    cout << "Update DeptLocation: ";
    int iD;
    cout << "Enter DeptLocation id you want to edit: ";
    cin >> iD;

    cout << "Enter DeptLocation update infor: " << endl;
    int deptLocationNumber;
    cout << "Enter DeptLocation number: ";
    cin >> deptLocationNumber;

    string deptLocation;
    cout << "Enter DeptLocation: ";
    cin >> deptLocation;

    DeptLocation *d = new DeptLocation(deptLocationNumber, deptLocation);

    dataAccess->UpdateData(iD, d);

    dataAccess->ExportToFile("dept_location.txt");
}

void DeptLocationUI::GetAllData()
{
    vector<BaseObject *> data = dataAccess->GetAllData();

    for (BaseObject *bo : data)
    {
        cout << bo->ToString() << endl;
    }
}
void DeptLocationUI::GetByID()
{
    int iD;
    cout << "Enter ID: ";
    cin >> iD;
    BaseObject *baseObject = dataAccess->GetByID(iD);
    cout << baseObject->ToString() << endl;
}