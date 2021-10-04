#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter two nums:";
    cin>>a>>b;
    if(b==0)
    {
        cout<<"division isn't possible";
    }
    else
    {
        c=a/b;
        cout<<"The ans = "<<c;
    }
    return 0;
}