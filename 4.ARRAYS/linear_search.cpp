//method of linear search
/*#include<iostream>
using namespace std;
int main()
{
    int a[5],key,i;
    cout<<"Enter the elements of the array:";
    for(i=0;i<5;i++)
        cin>>a[i];
    cout<<"Enter the key:";
    cin>>key;
    for(i=0;i<5;i++)
    {
        if(key==a[i])
        {
            cout<<"Key was found at "<<i;
            return 0;
        }
    }
    cout<<"Key was not found";
    return 0;
}*/


//instructor's code
#include <iostream>
using namespace std;
int main()
{
    int A[10]={2,4,6,8,12,3,5,7,9};
    int key;
    cout<<"Enter a Key element ";
    cin>>key;
    for(int i=0;i<10;i++)
    {
        if(key==A[i])
        {
            cout<<"The Key element is found at "<<i<<endl;
            exit(0);
        }
    }
    cout<<"Key element not found"<<endl;
    return 0;
}