//find the minimum element in an array
/*#include<iostream>
using namespace std;
int main()
{
    int a[7]={44,2,34,55,3,1,-9},min;
    min=a[0];
    for(int i=1;i<7;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    cout<<min;
    return 0;
}*/

//another way--using for each loop
#include<iostream>
using namespace std;
int main()
{
    int a[7]={44,2,34,55,3,1,-9},min;
    min=INT_MAX;
    for(auto x:a)
    {
        if(x<min)
            min=x;
    }
    cout<<"The minimum number = "<<min;
    return 0;
}