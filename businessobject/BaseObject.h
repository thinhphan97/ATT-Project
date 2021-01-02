#ifndef _businessobject_BaseObject_h
#define _businessobject_BaseObject_h

#include <string>
// #include "../libs/json.hpp"

using namespace std;
// using json = nlohmann::json;

class BaseObject
{

public:
   virtual void SetID(int id);
   virtual int GetID();
   virtual string ToString();
};

#endif