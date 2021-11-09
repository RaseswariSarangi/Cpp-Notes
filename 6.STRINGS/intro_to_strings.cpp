//types of declaration and initialisation of strings
#include<iostream>
using namespace std;
int main()
{
    char s[10]="Hello";
    cout<<s<<endl;

    char t[]="Raseswari";
    cout<<t<<endl;

    char u[]{'H','e','l','l','o','\0'};
    char b[]{'H','e','l','l','o','\0','o','o'};       //here we will see that null character acts as delimiter..so after that the characters are not printed
    cout<<u<<endl<<b<<endl;

    //using ASCII codes
    char a[]={65,66,67,68,69,'\0'};
    char z[]{65,66,67,68,69,0,70};                   //here int 0 also acts as a null character--as the values after zeroes don't get printed
    cout<<a<<endl<<z<<endl;

    //using character pointers for string declaration in heap
    char *q="Hello";                                 //this character pointer is not supported in latest version---so it shows a warning
    cout<<q;

    return 0;
}