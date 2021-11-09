//use of s.replace() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    getline(cin,s);

    string t;
    cout<<"Enter the string to be replaced:";
    getline(cin,t);

    s.replace(3,4,t);
    cout<<s<<endl;
    return 0;
}*/


//use of s.erase(), s.push_back() and s.pop_back() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);
    s.push_back('z');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.erase();
    cout<<s<<endl<<s.length();
    return 0;
}*/


//use of s.swap() function
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    string s1="world";
    s.swap(s1);
    cout<<s<<endl<<s1;
    return 0;
}