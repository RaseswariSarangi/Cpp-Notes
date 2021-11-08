//matrix multiplication
#include<iostream>
using namespace std;
int main()
{
    int a[25][25],b[25][25],c[25][25],r1,r2,c1,c2,i,j,k;
    cout<<"Enter the rows and columns for first matrix:";
    cin>>r1>>c1;
    cout<<"Enter the rows and colums of second matrix:";
    cin>>r2>>c2;

    //if no. of columns of first is not equal with no. of rows of second then multiplication is not possible
    if(c1!=r2)
    {
        cout<<"The matrix multiplication is not possible";
        return 0;
    }

    //if no. of columns of first is equal with no. of rows of second then multiplication is possible
    else
    {
        //read elements of first matrix
        cout<<"Enter the elements of first matrix:";
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                cin>>a[i][j];
        }

        //read elements of second matrix
        cout<<"Enter the elements of second matrix:";
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                cin>>b[i][j];
        }

        //print elements of first matrix
        cout<<"The elements of first matrix:"<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

        //print elements of second matrix
        cout<<"The elements of second matrix:"<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }

        //multiplication of matrices
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<c1;k++)
                        c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
        }
    }

    //printing result after multiplication
    cout<<"The result after multiplication of matrix:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
