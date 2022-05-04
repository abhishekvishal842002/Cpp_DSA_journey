//  print all subarrays of an array

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size:- ";
    cin>>n;
    cout<<"elements:- ";
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <=j; k++)
            {
                cout<<A[k];
            }
            cout<<endl; 
        }
    }
    return 0;
}