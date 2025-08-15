//This program demonstrates function pointers
//step 1 - declare function
//step 2 - create  pointer function
//step 3 - assign function to pointer function
//step 4 - call pointer function

#include <iostream>
using namespace std;

//step -1
int add(int a , int b){
    return a+b;
}
int main(){

    //step -2
    int (*operation)(int,int) = nullptr;

    //step - 3
    operation = &add;

    //step - 4
    cout << "Result: " << operation(5, 10) << endl;

    return 0;
}