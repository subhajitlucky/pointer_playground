//This program demonstrates the use of void pointer
//step 1 - declare a variable
//step 2 - declare a void pointer
//step 3 - assign variable address to pointer
//step 4 - dereference the pointer to access the value with correct type casting

#include <iostream>
using namespace std;
int main(){
    //step 1
    int x = 69;

    //step -2
    void* ptr;

    //step 3
    ptr = &x;

    //step - 4
    cout<<*reinterpret_cast<int*>(ptr)<<endl;
}