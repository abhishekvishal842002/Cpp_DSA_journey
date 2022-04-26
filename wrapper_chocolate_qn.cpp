// q. no. 1:   you have 15 rupees . you want to buy chocolates . 
// shopkeeper tells that you will get 1 chocolate for 1 rupee.
// also he tells that you will get 1 chocolate for 3 wrappers.
// find the max no. of chocolates you can buy ?

// solution:-

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the money you have";
    cin>>n;
    int wrapper=n;
    int chocolate =n;
    while(wrapper>=3)
    {
        chocolate=chocolate+(wrapper/3);
        wrapper=(wrapper%3)+(wrapper/3);
    }
    cout<<chocolate<<endl;
    return 0;
}