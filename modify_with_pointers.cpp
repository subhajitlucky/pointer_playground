//This program modifies the values of variables using pointers

#include <iostream>
using namespace std;

int main(){
    //3 steps
    //declare variables
    //get pointers to point them
    //change values via pointers

    //step 1 - variable declarations
    int a = 69;
    double b = 69.420;
    char c = 'X';
    int arr[3] = {1, 2, 3};

    //step 2 - declare pointers
    int *p_a = &a ; 
    double *p_b = &b;
    char *p_c = &c;
    int *p_arr = arr; //points to the first element of the array

    //step 3 - change values via pointers
    *p_a = 42;
    *p_b = 42.690;
    *p_c = 'Z';
    *(p_arr + 0) = 10; //change first element
    *(p_arr + 1) = 20; //change second element
    *(p_arr + 2) = 30; //change third element

    //step 4 - print modified values
    cout << "Modified values:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "arr: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

    return 0;
}