//This program demonstrates pointer arithmetic with arrays
#include <iostream>
using namespace std;

int main() {
   //2 steps
   //declare arrays
   //traverse the array using pointer arithmetic

   //step 1 - array declaration
   int arr[5] = {1,2,3,4,5};
   double darr[3] = {1.1, 2.2, 3.3};

   //step 2 - traverse the array using pointer arithmetic
   cout << "Integer array elements:" << endl;
   for(int i = 0; i<5;i++){
    cout<<"Address: "<<static_cast<const void*>(arr+i)<<" Value: "<<*(arr+i)<<endl;
   }

   cout << "Double array elements:" << endl;
   for(int i = 0; i<3;i++){
    cout<<"Address: "<<static_cast<const void*>(darr+i)<<" Value: "<<*(darr+i)<<endl;
   }

    return 0;
}