//////////////////////////////////////////////////only declaration of array///////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i;i<5;i++)
        cout<<a[i];
    return 0;
}*/
//as here array is not initialised so garbage values are printed 


////////////////////////////////////////////////////initialisation types///////////////////////////////////////////////////////////////////
////////////////1.declaration and initialisation of all values
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    return 0;
}*/


/////////////////2.declaration and initialisation of few elements
/*#include<iostream>
using namespace std;
int main()
{
    int b[5]={1,3};
    for(int i=0;i<5;i++)
        cout<<b[i]<<endl;
    return 0;
}*/
//so as all the index positions are not initialised they are assigned zero as default


////////////////////////////////////////declaration and intialisation of array without any particular size///////////////////////////////////
/*#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6};
    for(int i=0;i<9;i++)
        cout<<a[i]<<endl;
    return 0;
}*/
//here as the size is not mentioned so when we try to print the values of particular index position it prints garbage values


/////////////////////////////////////////////////////////////use of for-each loop////////////////////////////////////////////////////////// 
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    for(int x:a)
        cout<<x<<endl;
    return 0;
}*/
//1.here the variable x is assigned to each and every element of array a during iteration so when we print the value of x all the 
//elements are printed one by one


//2.the for-each loop works acording to the physical size of the array not the number of elements of the array
/*#include<iostream>
using namespace std;
int main()
{
    int a[6]={1,2,3};
    for(int x:a)
        cout<<x<<endl;
    return 0;
}*/


//3.use of for-each loop in printing values of diff.data types
/*#include<iostream>
using namespace std;
int main()
{
    float a[4]={1.1,1.2,3.5,9};
    for(int x:a)
        cout<<x<<endl;     //here int x is taken so trunkates the value after decimal
    for(float y:a)
        cout<<y<<endl;      //here float y is taken so prints all the values accurately
    for(auto z:a)
        cout<<z<<endl;      //here auto is used when in case of large program we forget that array of which datatype was declared then we can use auto to automaticaly take the declared data type
    return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
    char a[4]={'A',66,'C',68};
    for(auto x:a)
        cout<<x<<endl;
    for(int y:a)
        cout<<y<<endl;
    for(float z:a)
        cout<<z<<endl;
    return 0;
}
//66 and 68 are the ascii codes of character B and D--so it prints the value of character as auto is used
//all the int values are printed as int y is used--so the codes of ascii character is considered
//int y and float z don't make any difference