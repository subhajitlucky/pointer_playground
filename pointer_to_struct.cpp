//this program demonstrates pointer to struct
//step 1 - declare struct
// step 2 - create pointer struct
//step 3 - assign struct address to pointer
//step 4 - access struct value via pointer
//step 5 - modify struct value via pointer

#include <iostream>
using namespace std;

//step 1
struct Person{
    string name;
    int age;
};

int main (){
    Person p = {"Bruce", 30};

    //step 2
    Person* ptr = nullptr;
    ptr = &p;

    //step 4
    cout<<"name : "<<ptr->name<<endl;
    cout<<"Age : "<<ptr->age<<endl;

    //step 5
    ptr->name = "Barry";
    ptr->age = 20;

    cout<<"Modified value via pointer"<<endl;
    cout<<"name : "<<ptr->name<<endl;
    cout<<"Age : "<<ptr->age<<endl;

}