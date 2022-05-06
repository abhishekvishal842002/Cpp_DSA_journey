// given an array[] of size N. 
// the task is to find the first repeating element in the array of integers,i.e.,
// an element that  occurs more than once and whose index of first occurence is smallest.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"desc.";
    cin>>n;
    cout<<"desc.";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int rep=0;
    int first_rep_arr=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                cout<<i<<endl;
                break;
            }
        }
    }

    return 0;
    
}