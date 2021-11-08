//separate the positive and negative numbers
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,count=0,c=0;
    cout<<"Enter the elements of an array:";
    for(i=0;i<10;i++)
        cin>>arr[i];
    for(i=0;i<10;i++)
    {
        if(arr[i]>=0)
            count++;
        else c++;
    }
    cout<<"The number of positive integers = "<<count;
    cout<<endl<<"The no. of negative numbers = "<<c;
    return 0;
}