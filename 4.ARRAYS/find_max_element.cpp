//find maximum element in an array
/*#include<iostream>
using namespace std;
int main()
{
    int a[7]={11,9,44,2,12,67,3},max;
    max=a[0];
    for(int i=1;i<7;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    cout<<max;
    return 0;
}*/

//another way--using for each loop
#include<iostream>
using namespace std;
int main()
{
    int a[10]={11,9,44,2,12,67,3},max;
    max=INT_MIN;
    for(auto x:a)
    {
        if(x>max)
            max=x;
    }
    cout<<"The largest number is "<<max;
    return 0;
}