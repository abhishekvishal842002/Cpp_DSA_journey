//given an arrray a[] of size n. 
// for every i from 0 to n-1.
// output max(a[0],a[1],......,a[i])

#include<iostream>
using namespace std;
int main()
{
    int n;
    int maxx=INT_MIN;
    cout<<"enter size of array";
    cin>>n;
    
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }


    for (int a = 0; a < n; a++)
    {
        maxx=max(maxx,ar[a]);
        cout<<maxx<<endl;
    }
    


    
    return 0;
}