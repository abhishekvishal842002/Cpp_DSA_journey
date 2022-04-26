#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array:- ";
    cin>>n;
    int array1[n];
    cout<<"enter the elements of the array:- ";
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if (array1[j] < array1[i]){
                int temp=array1[j];
                array1[j]=array1[i];
                array1[i]=temp;
            }
            
        }
        

    }
    for (int i=0;i<n;i++)  {
        cout<<array1[i];
    }  
    return 0;
}