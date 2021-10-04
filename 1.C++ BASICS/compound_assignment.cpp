#include<iostream>
using namespace std;
int main()
{
    int sum=10,x=5,prod=1;
    //sum=sum+x;
    sum+=x;
    //prod=prod*x;
    prod*=x;
    //x=x+1;
    x+=1;
    cout<<"the sum = "<<sum;
    cout<<endl<<"the product = "<<prod;
    cout<<"The value of x = "<<x;
    return 0;
}
//here both sum=sum+x and sum+=x give the same result
//here both prod=prod*x and prod*=x give the same result
//here x=x+1 and x+=1 gives same result