//This program demonstrates dynamic memory allocation
//step 1 - allocate memory
//step 2 - free memory
//step 3 - assign nullptr

#include <iostream>
using namespace std;

int main(){
    //step 1
    int* p = new int;
    *p = 69;
    cout<<"Value at allocated memory: "<<*p<<endl;
    cout<<"value p pointer holds: "<<p<<endl;

    //step 2
    delete p;

    //step 3
    p = nullptr;

    return 0;
    
}
