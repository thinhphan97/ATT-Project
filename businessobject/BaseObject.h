#ifndef _project_final_businessobject_BaseObject_h
#define _project_final_businessobject_BaseObject_h

#include <string>

using namespace std;

class BaseObject
{

public:
   /** @brief Function is base class for setId 
     *  
     *  Function is base class setId 
     *  @return not return
     */
   virtual void SetID(int id)= 0;

   /** @brief Function is base class for getId 
     *  
     *  Function is base class for getId 
     *  @return the ID value
     */
   virtual int GetID() = 0;

   /** @brief Function is base class for conver object to string
     *  Function is base class for conver object to string
     *  @return the string value of object
     */

   virtual string ToString() = 0;
};

#endif