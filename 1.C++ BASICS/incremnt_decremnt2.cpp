#include<iostream>
using namespace std;
int main()
{
    int x=5,j;
    j=2 * ++x + 2 * x++;
    //j=2 * x++ + 2 * ++x;
    cout<<x<<" "<<j;
    return 0;
}