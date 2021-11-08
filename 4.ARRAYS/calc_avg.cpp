//calculate the average of all elements present in an array
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter value of n:";
    cin>>n;
    int a[50];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<"The average of all elements is "<<sum/n;
    return 0;
}