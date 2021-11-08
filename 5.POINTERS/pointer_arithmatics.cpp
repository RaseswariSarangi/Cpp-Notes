//printing address of first index of array
/*#include<iostream>
using namespace std;
int main()
{
    int a[5] {1,2,3,4,5};             //we can even assign values to an array without using assignment operator
    int *p=a;
    cout<<*p<<endl;
    cout<<p;
    return 0;
}*/

//pointer arithematics
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]{1,2,3,4,5};
    int *p=a;
    cout<<p<<endl;
    cout<<*p<<endl<<endl;
    
    //1.p++
    p++;
    cout<<*p<<endl<<endl;

    //2.p--
    p--;
    cout<<*p<<endl<<endl;

    //3.p=p+2
    p=p+2;
    cout<<*p<<endl<<endl;

    //or we can also write like this
    cout<<*p<<endl;
    cout<<*(p+2)<<endl<<endl;

    //using for loop for acessing all elements in array
    for(int i=0;i<5;i++)
    {

        cout<<a[i]<<endl;
        //cout<<p[i]<<endl;
        //cout<<i[a]<<endl;
        //cout<<*(a+i)<<endl;
        //cout<<*(p+i)<<endl;                      //all the commented steps are same as the upper one---a[i]


        cout<<a+i<<endl;                       //in this case we get the adress of the memory where elements of array are stored
        //cout<<p+i<<endl;                     //as p=a...so p+i gives the same result as a+i
    }
    return 0;
}*/
//as in this compiler int takes 4 bytes of memory so when p+2 is done then it moves to next location by 8 bytes


//use of for loop to acess all elements of array
/*#include<iostream>
using namespace std;
int main()
{
    int a[5]{1,2,3,4,5};
    int *p=a;
    cout<<p<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<p<<endl;                  //here the pointer p has moved beyond the last index becoz p++ is done even after reaching last index
    return 0;
}*/
//same result as above

//5.difference between two pointers
#include<iostream>
using namespace std;
int main()
{
    int a[5]{1,2,3,4,5};
    int *p=&a[0],*q=&a[4],*d=&a[2];
    cout<<q-p<<endl;
    cout<<p-q<<endl;                         //here -4 is obtained in result as p is near and q is far
    cout<<q-d<<endl;
    return 0;
}
//&a[0] is same as a--- as by default pointer stores first index's address