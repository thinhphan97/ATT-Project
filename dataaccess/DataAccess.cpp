#include "DataAccess.h"
#include <iostream>

int DataAccess::ExportToFile(string file_name)
{
    cout << "ex to file data access" << endl;
    return 1;
}

int DataAccess::AddData(BaseObject *baseObject)
{
    return 1;
}

int DataAccess::DeleteData(int ID)
{
    return 0;
}
int DataAccess::UpdateData(int ID)
{
    return 0;
}