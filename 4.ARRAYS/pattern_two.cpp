//print the following pattern
/*  *
    * *
    * * *
    * * * *
*/

//code
/*#include<iostream> 
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>=j)
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

//or
/*#include<iostream> 
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/




//print the following pattern
/*  * * * *
    * * *
    * *
    *
*/

//code
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<=j)
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/

//or
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=4-(i+1);j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}




//print the following pattern
/*  * * * *
      * * *
        * *
          *
*/

//code
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i<=j)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

//or
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i>j)
                cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/



//print the following pattern
/*        *
        * *
      * * *
    * * * *
*/

//code
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if((i+j)>=4-1)
                cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/