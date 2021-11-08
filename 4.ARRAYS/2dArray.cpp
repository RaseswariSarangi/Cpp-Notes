///////////////////////////////declaration of 2-D array//////////////////////////////////////////////////////
//code
/*#include<iostream>
using namespace std;
int main()
{
    int a[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}*/
//it will print some garbage values are the initialisation is not done for 2d array


//////////////////////////////////////////initialisation of 2-D array/////////////////////////////////////////////////
//declaration and initialisation
/*#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,5,2,9};
    int b[2][3]={{1,5,7},{9,3,8}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int k=0;k<2;k++)
    {
        for(int l=0;l<3;l++)
            cout<<b[k][l]<<" ";
        cout<<endl;
    }
    return 0;
}*/
//both the ways print the 2d array

//partial initialisation
/*#include<iostream>
using namespace std;
int main()
{
    int arr[2][3]={1,2,3,8};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}*/
//as all the values were not initialised so they were initialised automatically to zero


/////////////////////////////////////////////////using for-each loop////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={1,2,3,4,5,6};
    for(auto& x:a)
    {
        for(auto& y:x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}*/
//auto&---it is used in case of 2-d array when we forget the data type in which the 2-d array was declared

//input of values to be stored in array using for-each loop
#include<iostream>
using namespace std;
int main()
{
    int a[2][3];
    cout<<"Enter the elements:";
    for(auto& x:a)
    {
        for(auto& y:x)
            cin>>y;
    }
    for(auto& x:a)
    {
        for(auto& y:x)
            cout<<y<<" ";
        cout<<endl;
    }
    return 0;
}