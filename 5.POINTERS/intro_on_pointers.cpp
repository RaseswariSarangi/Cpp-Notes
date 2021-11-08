//introduction to pointers
#include<iostream>
using namespace std;
int main()
{
    int x=10;     //declaration and initialisation of data variable

    //int *p;       //declaration of address variable 

    //p=&x;            //initialisation of address varibale

    int *p=&x;          //or--declaration and initialisation of address variable in single step

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p;             //dereferencing-----to get the value of the data to which the pointer is pointing
    return 0;
}
// p and &x will print the same result becoz the &x is referred to as the address of x data variable
//so the &x value is stored in the varibale p so as the address of x is stored in pointer p so it is called as address variable