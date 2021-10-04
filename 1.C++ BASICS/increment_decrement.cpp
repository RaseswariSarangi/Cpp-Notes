/*#include<iostream>
using namespace std;
int main()
{
    int i=5;
    //i+=1;
    i++;
    //++i;
    //cout<<i<<endl;
    cout<<i<<endl;
    //cout<<i<<endl;
    return 0;
}*/
//in all the three cases i+=1 , i++ and ++i we get the same result

#include<iostream>
using namespace std;
int main()
{
    int i=5,j;
    //j=i++;     //here first assignment is done then increment
    j=++i;       //here first increment is done then value is assigned
    cout<<i<<" "<<j<<endl;
    return 0;
}