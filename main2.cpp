#include <iostream> 
#include <direct.h>
#include <ctime>
#include <algorithm>
using namespace std;

int main(){
    time_t now=time(0);
    const char* dt = ctime(&now);
    
    cout<<mkdir(dt);
    cout<<dt;

    return 0;
}