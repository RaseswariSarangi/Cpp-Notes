//nested loop
//example-1
/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            cout<<"("<<i<<","<<j<<")"<<endl;
    }
    return 0;
}*/

//example-2---making a square
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}*/

//example-3--making a matrix
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            cout<<"("<<i<<","<<j<<")"<<" ";
        cout<<endl;
    }
    return 0;
}