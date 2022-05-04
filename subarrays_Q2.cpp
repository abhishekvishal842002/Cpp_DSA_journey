// MAXIMUM SUBARRAY SUM
// find the subarray in an array which has maximum sum



//NON-OPTIMISED APPROACH.

#include<iostream>
#include<climits>
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

    int max=INT_MIN;
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += A[j];
            if(sum>max){
                max=sum;
            }
        }
        sum=0;
    }
    cout<<max<<endl;
    return 0;
}