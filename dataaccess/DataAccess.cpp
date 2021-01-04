#include "DataAccess.h"
#include <iostream>
#include <fstream>

int DataAccess::GetMaxId()
{
    return _maxId; // return max id
}

int DataAccess::ExportToFile(string file_name)
{
    ofstream fileOut(file_name); // Create and open a text file
    // Write to the file the number object in vector
    fileOut << _data.size() << endl;

    // Write to the file the object in vector
    for (BaseObject *b : _data)
    {
        fileOut << b->ToString() << endl;
    }
    fileOut.close(); // Close the file
    return 1;
}

int DataAccess::AddData(BaseObject *baseObject)
{
    _maxId++;                    // add 1 for ID
    baseObject->SetID(_maxId);   // Set this ID for new object
    _data.push_back(baseObject); // add object to vector
    return _maxId;
}

int DataAccess::DeleteData(int ID)
{
    //find and delete the object by obiect id
    for (int i = 0; i < _data.size(); i++)
    {
        if ((_data.at(i)->GetID()) == ID)
        {
            _data.erase(_data.begin() + i); //delete the object in vector
        }
    }
    return 1;
}

vector<BaseObject *> DataAccess::GetAllData()
{
    return _data; // return the vector data
}

BaseObject *DataAccess::GetByID(int ID)
{
    BaseObject *baseObject;
    //find the object by obiect id
    for (int i = 0; i < _data.size(); i++)
    {

        if ((_data.at(i)->GetID()) == ID) 
        {
            baseObject = _data.at(i); 
        }
    }
    return baseObject; 
}
