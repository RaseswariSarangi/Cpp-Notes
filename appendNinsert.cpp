//use of s.append() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cout<<"Enter a string:";
    getline(cin,s);

    cout<<s.capacity()<<endl;

    cout<<"Enter the string to be added:";
    getline(cin,t);

    s.append(t);
    cout<<s<<endl;

    cout<<s.capacity()<<endl<<s.length()<<endl;
    return 0;
}*/


//use of s.insert() function
//example-1
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    getline(cin,s);

    string t;int n;
    cout<<"Enter string to insert:";
    getline(cin,t);
    cout<<"Enter index:";
    cin>>n;

    s.insert(n,t);
    cout<<s<<endl;
    return 0;
}*/

//example-2
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,t;
    cout<<"Enter the string:";
    getline(cin,s);
    
    cout<<"Enter string to be inserted:";
    getline(cin,t);

    s.insert(3,t,1,3);
    cout<<s<<endl;
    return 0;
}
