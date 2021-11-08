//binary search
#include<iostream>
using namespace std;
int main()
{
    int a[10]={11,23,34,44,56,66,72,80,91,100};
    int l=0,h=9,mid,key;
    cout<<"Enter key:";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"Key was found at "<<mid;
            return 0;
        }
        else if(key<a[mid]) 
            h=mid-1;
        else l=mid+1;
    }
    cout<<"Key was not found";
    return 0;
}