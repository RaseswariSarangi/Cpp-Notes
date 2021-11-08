//matrix addition
/*#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,7,6};
    int b[2][3]={11,54,7,32,1,90};
    int c[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            c[i][j]=a[i][j] + b[i][j];
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}*/

//matrix substraction
#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,7,6};
    int b[2][3]={11,54,7,32,1,90};
    int c[2][3];

    //reading all elements of 2d array
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            c[i][j]=a[i][j] - b[i][j];
    }

    //displaying all elements of 2d array
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<c[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}