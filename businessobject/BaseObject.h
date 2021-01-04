#ifndef _project_final_businessobject_BaseObject_h
#define _project_final_businessobject_BaseObject_h

#include <string>

using namespace std;

class BaseObject
{

public:
  /** @brief Function is Virtual function for setId 
     *  
     *  Function is Virtual function for setId 
     *  @return 
     */
  virtual void SetID(int id) = 0;

  /** @brief Function is Virtual function for get Id 
     *  
     *  Function is Virtual function for setId 
     *  @return 
     */
  virtual int GetID() = 0;

  /** @brief Function is Virtual function for to string 
     *  
     *  Function is Virtual function for setId 
     *  @return 
     */
  virtual string ToString() = 0;
};

#endif