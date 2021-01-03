#include "DependentData.h"
#include <fstream>
#include <iostream>
#include <string>

DependentData::DependentData()
{
    _data.resize(0);
    _maxId = 0;
}

DependentData::DependentData(string file_name)
{
    _maxId = 0;
    _data.resize(0);

    ifstream fileIn(file_name);

    int numberDependent = 0;
    fileIn >> numberDependent;

    int id;
    long essn;
    string dependentName;
    char sex;
    string bDay;
    string relationship;

    for (int i = 0; i < numberDependent; i++)
    {
        fileIn >> id;
        fileIn >> essn;
        fileIn >> dependentName;
        fileIn >> sex;
        fileIn >> bDay;
        fileIn >> relationship;
        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new Dependent(id, essn, dependentName, sex, bDay, relationship);

        _data.push_back(baseObject);
        _maxId = id;
    }

    fileIn.close();
}

int DependentData::UpdateData(int ID, BaseObject *baseObject)
{
    Dependent *dependent = (Dependent *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            Dependent *d = (Dependent *)_data.at(i);

            d->SetESSN(dependent->GetESSN());
            d->SetDependentName(dependent->GetDependentName());
            d->SetSex(dependent->GetSex());
            d->SetBDate(dependent->GetBDate());
            d->SetRelationship(dependent->GetRelationship());

            return 1;
        }
    }
    return 0;
}
