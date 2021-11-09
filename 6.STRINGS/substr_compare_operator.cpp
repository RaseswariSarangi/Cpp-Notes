//use of s.substr() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    cout<<s.substr(3)<<endl<<s.substr(3,4)<<endl<<s.substr(0,7);
    return 0;
}*/

//use of s.compare() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Programming";
    string s2="Programming";
    string s3="programming";               
    string s4="elder";
    string s5="minor";
    cout<<s1.compare(s2)<<endl<<s2.compare(s3)<<endl<<s4.compare(s5);
    return 0;
}*/
//here s1.compare(s2)==0 becoz both the strings are same
//s2.compare(s3)==-1 becoz ascii code value of p>P
//here s4.compare(s5)==-1 becoz ascii code value of e<m


//use of operators present in string class
//at()
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Holiday";
    cout<<s.at(4)<<endl;
    s[4]='t';
    cout<<s;
    return 0;
}*/

//front() and back()
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    cout<<s.front()<<endl<<s.back();
    return 0;
}*/

//+ operator--used for concatenation of string
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    string s1=" of cpp";
    string s2=" Hello";
    cout<<s+s2<<endl;
    cout<<s+s2+s1<<endl;
    cout<<s+s2+" world"+s1;
    s2=s+s2+" world"+s1;
    cout<<endl<<s2;                   //here s2 has become the whole string
    return 0;
}*/

//=--operator used for copying one contents to another
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="Programming";
    string s1="Hello world";
    cout<<s1<<endl;
    s1=s;
    cout<<s1;
    return 0;
}