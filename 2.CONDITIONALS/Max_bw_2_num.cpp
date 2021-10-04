#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two nums:";
    cin>>x>>y;
    if(x>y)
    {
        cout<<"Max = "<<x;
    }
    else{
        cout<<"Max = "<<y;
    }
    return 0;
}