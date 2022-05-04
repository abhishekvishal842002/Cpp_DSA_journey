// you are given array arr[] of N integers including 0. 
// the task is to find the smallest positive number missing from the array.

// constraints :
//  1<=N<=10^6
// -10^6 <= Ai <= 10^6

#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"size:- ";
    cin>>N;
    cout<<"elements:-  ";

    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    const int Z = 1e6 + 2; //means 10^6 +2   
    bool check[Z];
    for (int i = 0; i < Z; i++)
    {
        check[i]=0;
    }

    for (int i = 0; i < N; i++)
    {
        if(arr[i]>=0){
            check[arr[i]]=1;
        }
    }
    
    int ans=-1;
    for (int i = 0; i < Z; i++)
    {
        if(check[i]==false){
            ans = i;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}   