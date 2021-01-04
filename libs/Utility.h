#ifndef Project_libs_Utility_H_
#define Project_libs_Utility_H_
#include <string>
using namespace std;
class Utility{
public:
    static string replaceAll(string s, const string &search, const string &replace);
};
#endif