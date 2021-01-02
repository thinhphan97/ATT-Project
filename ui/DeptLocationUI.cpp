#include "DeptLocationUI.h"

void DeptLocationUI::Add()
{
    char enter('y');
    // do
    // {
    int DeptLocationsID, DNumber;
    string DLocation;
    cout << "Enter DeptLocation infor: ";

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

    // cout << "Continute ? (y/n) ";
    // cin >> enter;
    // } while (enter != 'n');
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
    int iD;
    cout << "Enter DeptLocation id: ";
    cin >> iD;

    cout << "Enter DeptLocation update infor: " << endl;
    int deptLocationNumber;
    cout << "Enter DeptLocation number: ";
    cin >> deptLocationNumber;

    string deptLocation;
    cout << "Enter DeptLocation number: ";
    cin >> deptLocation;

    dataAccess->UpdateData(iD, deptLocationNumber, deptLocation);

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