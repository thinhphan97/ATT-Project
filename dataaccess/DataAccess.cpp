#include "DataAccess.h"
#include <iostream>
#include <fstream>

int DataAccess::GetMaxId()
{
    return _maxId;
}

int DataAccess::ExportToFile(string file_name)
{
    ofstream fileOut;
    fileOut.open(file_name, ios::out);
    fileOut << _data.size() << endl;
    for (BaseObject *b : _data)
    {
        fileOut << b->ToString() << endl;
    }
    fileOut.close();
    return 1;
}

int DataAccess::AddData(BaseObject *baseObject)
{
    _maxId++;
    baseObject->SetID(_maxId);
    _data.push_back(baseObject);
    return _maxId;
}

int DataAccess::DeleteData(int ID)
{
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            _data.erase(_data.begin() + i);
        }
    }
    return 1;
}
int DataAccess::UpdateData(int ID, int deptNumber, string deptLocation)
{
    return 0;
}

vector<BaseObject *> DataAccess::GetAllData()
{
    return _data;
}

BaseObject* DataAccess::GetByID(int ID)
{
    BaseObject *baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            baseObject = _data.at(i);
        }
    }
    return baseObject;
}
