// given an array a[] of size n .
// output sum of each subarray of the given array.
#include<iostream>
using namespace std;
int main()
{
    int n;
    int total=0;
    cout<<"enter size  ";
    cin>>n;
    cout<<"enter elements:-  ";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    for (int i = 0; i < n; i++)
    {
        int sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=array[j];
            cout<<sum<<endl;
            total++;
        }
        
    }
    cout<<"total no. of subarrrays ="<<total<<endl;
    
    
    return 0;
}