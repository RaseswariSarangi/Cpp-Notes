//use of s.copy() function
//example-1(when the total length is taken then it works fine and null character is inserted at the ned which terminates the string)
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Welcome";
    char str[10];
    s.copy(str,s.length());
    str[s.length()]='\0';               //null character is inserted at the end for termination of the character array
    cout<<str<<endl;
    return 0;
}*/

//example-2(when whole length is not taken then it displays the desired character along with some garbage values as null character is not present)
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Welcome";
    char str[10];
    s.copy(str,3);
    str[3]='\0';                          //null character is inserted at the end for termination of the character array
    cout<<str;
    return 0;
}*/



//use of s.find() and s.rfind() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="How you are you";
    cout<<s.find("are")<<endl;
    cout<<s.find('o')<<endl;
    cout<<s.find("kkk")<<endl;
    cout<<s.find("were")<<endl;

    cout<<s.rfind('o')<<endl;
    cout<<s.rfind("you")<<endl;
    return 0;
}*/

//use of s.find_first_of() and s.find_last_of() function:
#include<iostream>
#include<string>
using namespace std;
int main() 
{
  string s="Hello world";
  cout<<s.find_first_of('l')<<endl;
  cout<<s.find_first_of('l',3)<<endl;                   //it checks from index=3
  cout<<s.find_first_of('l',4)<<endl;                   //it checks after index=4
  cout<<s.find_first_of("le")<<endl;
  cout<<s.find_last_of('l')<<endl;
  cout<<s.find_last_of("ld")<<endl;
  return 0;
} 
