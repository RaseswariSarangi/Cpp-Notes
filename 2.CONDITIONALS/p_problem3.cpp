//bill amount prblm
/*#include<iostream>
using namespace std;
int main()
{
    int bill,discount,discounted_amount;
    cout<<"Enter the price:";cin>>bill;
    if(bill>=500){
        discount=(bill*20)/100;
        discounted_amount=bill-discount;
        cout<<"The price after discount :Rs"<<discounted_amount;
    }
    else if(bill>=100 && bill<500){
        discount=(bill*10)/100;
        discounted_amount=bill-discount;
        cout<<"The price discount :Rs"<<discounted_amount;
    }
    else cout<<"The price after discount :Rs"<<bill;
    return 0;
}*/


//instructors note
#include<iostream>
using namespace std;
int main()
{
    float bill,discount=0.0;
    cout<<"Enter the bill :";
    cin>>bill;
    if(bill>=500)
        discount=(bill*20)/100;
    else if(bill>=100 && bill<500)
        discount=(bill*10)/100;
    cout<<"\nThe price :Rs"<<bill;
    cout<<"\nThe eligible discount:Rs"<<discount;
    cout<<"\nThe payable price :Rs"<<(bill-discount);
    return 0;
}
