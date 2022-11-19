// MAXIMUM SUBARRAY SUM
// find the subarray in an array which has maximum sum

//KADANE'S ALGORITHM. 

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"size:-  ";
    cin>>n;
    cout<<"elements:-  ";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int currsum=0;
    int maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i]<0)
        {
            currsum=0;      
        }
        else{
            currsum+=a[i];
        }
        maxsum=max(maxsum,currsum);
        
    }
    cout<<maxsum<<endl;

 
    return 0;
}