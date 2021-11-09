//use of s.length() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    cout<<str.length()<<endl<<str.size();
    return 0;
}*/



//use of s.capacity() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    cout<<str.capacity()<<endl;
    return 0;
}*/



//use of s.resize(size paramter) function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    cout<<str.capacity()<<endl;
    int size;
    cout<<"Enter size:";
    cin>>size;
    str.resize(size);
    cout<<str.capacity();
    return 0;
}*/
//if size parameter of resize is mentioned to be less than 30 then it takes default 30



//use of s.max_size() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<str.max_size()<<endl;
    return 0;
}*/



//use of s.clear() function
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    str.clear();
    cout<<"The string is :"<<str<<endl;
    cout<<str.size();
    return 0;
}



//use of s.empty() function
/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string:";
    getline(cin,str);
    if(str.empty())
        cout<<"String is empty";
    else cout<<"String is not empty";
    return 0;
}*/