// This program prints the addresses of various variables

#include <iostream>
using namespace std;

int main(){

    // Variable declarations
    int a = 69;
    double b = 69.420;
    char c = 'X';
    int arr[3] = {1,2,3};

    //Printing addresses of the variables
    cout<<"a: "<<static_cast<const void*>(&a)<<endl;
    cout<<"b: "<<static_cast<const void*>(&b)<<endl;
    cout<<"c: "<<static_cast<const void*>(&c)<<endl;
    cout<<"arr: "<<static_cast<const void*>(&arr)<<endl;

    return 0;

}