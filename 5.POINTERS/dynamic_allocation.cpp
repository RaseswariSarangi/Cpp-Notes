//demo of dynamic memory allocation or heap memory allocation
//creating array in heap
/*#include<iostream>
using namespace std;
int main()
{
    int *p=new int[5];
    p[0]=1;
    p[1]=3;
    p[2]=5;
    cout<<p[0]<<endl;
    delete []p;

    //nullptr is used instead of NULL in modern programs
    p=nullptr;
    return 0;
}*/

//benefit of having array in heap

//memory allocation in stack by taking input from user
/*#include<iostream>
using namespace std;
int main()
{
    //for size of an array to be defined by the user
    int size;
    cout<<"Enter the size of an array:";
    cin>>size;
    int a[size];
    
    //for knowing memory consumed by the array
    cout<<sizeof a;
    return 0;
}*/
//the result is 20 when size=5 as aary is of int type and each index consumes 4 bytes so total 5*4=20 bytes are consumed
//as this array is created in stack so there is no syntax to change the size of the array later


//memory allocation in heap
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size;";
    cin>>size;
    int *p=new int[size];
    cout<<sizeof p<<endl;

    //before changing the size we must delete the array of previous size to avoid memory leak
    delete []p;

    //here there is syntax to redeclare or change the size of the array later in the program----advantage of dynamic declaration of memory
    cout<<"Enter new size:";
    cin>>size;
    p=new int[size];
    cout<<sizeof p;
    
    //deleting or deallocating 
    delete []p;
    p=nullptr;

    return 0;
}
//dynamic memory allocation helps to change the size of the pointer during run time so it is more flexible than stack memory allocation