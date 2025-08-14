// This program demonstrates pointer to pointer (double pointer)
//step 1 - Declare variables
//step 2 - declare a pointer to the variable
//step 3 - declare a pointer to the pointer
#include <iostream>
using namespace std;

int main(){

    //step 1 - declare variable
    int a = 69;

    //step 2 - declare a pointer to the variable
    int* p = &a;

    //step 3 - declare a pointer to the pointer
    int** pp = &p;

    //print values
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << p << " "<<"Value of a via pointer: "<<*p<<endl;
    cout << "Address of pointer p: " << pp << " " << "Value of p via pointer: " << *pp <<" "<< "Value of a via double pointer: "<<**pp<<endl;

    //modify value through double pointer
    **pp = 42;

    //print modified values
    cout<<"after modifying via double pointer"<<endl;
    cout << "Value of a: " << a << endl;
    cout<<"Address of a: " << p << " "<<"Value of a via pointer: "<<*p<<endl;
    cout << "Address of pointer p: " << pp << " " << "Value of p via pointer: " << *pp << " " << "Value of a via double pointer: "<<**pp<<endl;

    return 0;

}