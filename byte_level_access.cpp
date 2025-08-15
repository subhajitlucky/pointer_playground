//This program demonstrates byte level access using char pointers
//step 1 - declare a hex value
//step 2 - assign the first byte to a character pointer
//step 3 - access memory bytes using pointer

#include <iostream>
using namespace std;

int main(){
    //declare a hex value variable
    int num = 0x12345678;

    //assign the first byte to a char pointer
    unsigned char* p = reinterpret_cast<unsigned char*>(&num);

    //access memory bytes using pointer
    for(size_t i =0;i<sizeof(num);i++){
        cout << "Address: " << static_cast<const void*>(p + i)
             << " | Value (dec): " << static_cast<int>(*(p + i))
             << " | Value (hex): 0x" << hex
             << static_cast<int>(*(p + i)) << dec << endl;

    }

}