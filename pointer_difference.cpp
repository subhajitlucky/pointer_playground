//This program demonstrates pointer difference
//step 1 - declare an array
//step 2 - find two different pointers at different places or indexes
//step 3 - calculate difference in elements and in bytes.

#include <iostream>
using namespace std;
int main(){
    //step - 1
    int arr[5] = {10,20,30,40,50};

    //step 2
    int* p1 = &arr[1];
    int* p2 = &arr[4];

    //step 3
    cout<<"Difference in elements: "<<(p2-p1)<<endl;
    cout<<"Difference in bytes: "<<reinterpret_cast<char*>(p2)-reinterpret_cast<char*>(p1)<<endl;

    return 0;
}