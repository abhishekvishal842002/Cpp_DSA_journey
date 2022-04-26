#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size of array:- ";
    cin>>n;
    int array1[n];
    cout<<"enter elements of the array: - ";
    for (int a = 0; a < n; a++)
    {
        cin>>array1[a];
    }
    

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < (n-i)-1; j++)
        {
            if(array1[j]>array1[j+1]){
                int temp=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=temp;
            }
        }
        
    }
    for (int o = 0; o < n; o++)
    {
        cout<<array1[o]<<" ";
    }
    
    
    
    return 0;
}