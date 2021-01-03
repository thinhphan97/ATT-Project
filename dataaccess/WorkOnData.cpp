#include "WorkOnData.h"
#include <fstream>
#include <iostream>
#include <string>

WorkOnData::WorkOnData()
{
    _data.resize(0);
    _maxId = 0;
}

WorkOnData::WorkOnData(string file_name)
{
    _maxId = 0;
    _data.resize(0);

    ifstream fileIn(file_name);

    int numberWorkOn = 0;
    fileIn >> numberWorkOn;

    int id;
    long essn;
    int pno;
    float hours;

    for (int i = 0; i < numberWorkOn; i++)
    {
        fileIn >> id;
        fileIn >> essn;
        fileIn >> pno;
        fileIn >> hours;
        // std::cin.ignore(32767, '\n');
        // getline(fileIn, DLocation);

        BaseObject *baseObject = new WorkOn(id, essn, pno, hours);

        _data.push_back(baseObject);
        _maxId = id;
    }

    fileIn.close();
}

int WorkOnData::UpdateData(int ID, BaseObject *baseObject)
{
    WorkOn *workOn = (WorkOn *)baseObject;
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID)
        {
            WorkOn *w = (WorkOn *)_data.at(i);

            w->SetESSN(workOn->GetESSN());
            w->SetPNO(workOn->GetPNO());
            w->SetHours(workOn->GetHours());

            return 1;
        }
    }
    return 0;
}
