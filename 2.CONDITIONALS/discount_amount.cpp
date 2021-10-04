#include<iostream>
using namespace std;
int main()
{
    float price,discount,discounted_price;
    cout<<"Enter the price:";
    cin>>price;
    if(price>=5000)
    {
        cout<<"40 percecnt discount is available"<<endl;
        discount=(price*40)/100;
        discounted_price=price-discount;
        cout<<"The price: "<<discounted_price;
    }
    else if(price<5000 && price>=1000)
    {
        cout<<"20 percent discount is available"<<endl;
        discount=(price*20)/100;
        discounted_price=price-discount;
        cout<<"The price: "<<discounted_price;
    }
    else
    {
        cout<<"5 percent discount is available"<<endl;
        discount=(price*5)/100;
        discounted_price=price-discount;
        cout<<"The price: "<<discounted_price;
    }
    return 0;
}
