//use of forward interator
//example-1
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    string::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}*/

//example-2
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="programming";
    string::iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        *i=*i-32;
        cout<<*i<<endl;
    }
    cout<<s;
    return 0;
}*/
//here even the string is modified


//use of reverse operator
//example-1
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    string::reverse_iterator rit;
    for(rit=s.rbegin();rit!=s.rend();rit++)
    {
        cout<<*rit<<endl;
    }
    cout<<s<<endl;
    return 0;
}


//to print all elements of array in normal way
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    for(int i=0;s[i]!='\0';i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}*/

//to convert all the capital elements into small or small letters into capital
//small letter - 32 = capital letter
//capital letter + 32 = small letter
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="programming";
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=s[i]-32;
    }
    cout<<s;
    return 0;
}*/