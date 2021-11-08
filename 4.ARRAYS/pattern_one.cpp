//printing a pattern of this:
/*1  2  3  4 
  5  6  7  8
  9  10 11 12
  13 14 15 16
*/

//code
/*#include<iostream>
using namespace std;
int main()
{
    int count=1;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {   
           cout<<count<<"    ";
           count++;
        }
        cout<<endl;
    }
    return 0;
}*/


//printing a square from stars
//same method as above
/*#include<iostream>
using namespace std;
int main()
{
  for(int i=0;i<6;i++)
  {
    for(int j=0;j<6;j++)
      cout<<"* ";
    cout<<endl;
  }
  return 0;
}*/

//printing a rectangle using stars
#include<iostream>
using namespace std;
int main()
{
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<8;j++)
      cout<<"* ";
    cout<<endl;
  }
  return 0;
}