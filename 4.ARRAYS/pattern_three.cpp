/*A) 1
     1 2
     1 2 3
     1 2 3 4
     1 2 3 4 5
*/
//code
/*#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}*/




/*B) A
     B C
     D E F
     G H I J
     K L M N O
*/
//code
#include<iostream>
using namespace std;
int main()
{
    char c='A';
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}