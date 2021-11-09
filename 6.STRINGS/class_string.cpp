//use of class string
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter string:";
    getline(cin,str1);
    cout<<"Enter another string:";
    cin>>str2;
    cout<<str1<<endl<<str2;
    return 0;
}*/

//use of multiple inputs with same variable name
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;

    cout<<"Enter string:";
    //cin>>str;
    getline(cin,str);
    cout<<str<<endl;
    return 0;
}
//here we can see the error of not able to take multiple strings as input is solved