// This program demonstrates const pointer variations
// Step 1 - Pointer to const data (data can't be changed through this pointer)
// Step 2 - Const pointer (pointer can't be changed to point to another address)
// Step 3 - Const pointer to const data (neither the pointer nor the data can be changed)

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int a = 69;
    int b = 42;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "Address of a = " << &a << endl;
    cout << "Address of b = " << &b << endl;

    // Step 1: Pointer to const data
    const int* p1 = &a;
    cout << "\nStep 1: Pointer to const data" << endl;
    cout << "p1 points to value: " << *p1 << endl;
    cout << "p1 address: " << p1 << endl;
    cout << "Changing pointer to point to b..." << endl;
    p1 = &b; // Allowed: changing the pointer
    cout << "p1 now points to value: " << *p1 << endl;
    cout << "p1 address: " << p1 << endl;
    // *p1 = 42; // Not allowed: changing the data

    // Step 2: Const pointer
    int* const p2 = &a;
    cout << "\nStep 2: Const pointer" << endl;
    cout << "p2 points to value: " << *p2 << endl;
    cout << "p2 address: " << p2 << endl;
    cout << "Changing the data p2 points to..." << endl;
    // p2 = &b; // Not allowed: changing the pointer
    *p2 = 42; // Allowed: changing the data
    cout << "p2 now points to value: " << *p2 << endl;
    cout << "p2 address: " << p2 << endl;

    // Step 3: Const pointer to const data
    const int* const p3 = &a;
    cout << "\nStep 3: Const pointer to const data" << endl;
    cout << "p3 points to value: " << *p3 << endl;
    cout << "p3 address: " << p3 << endl;
    cout << "Neither the pointer nor the data can be changed." << endl;
    // p3 = &b; // Not allowed: changing the pointer
    // *p3 = 42; // Not allowed: changing the data

    return 0;
}