//sum of all the elements of an array
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},sum=0;
    for(int x:a)
        sum+=x;
    cout<<sum;
    return 0;
}*/

//other way
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5},sum=0;
    for(int i=0;i<5;i++)
        sum+=a[i];
    cout<<sum;
    return 0;
}