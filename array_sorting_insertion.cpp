#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"size of array= ";
    cin>>n;
    int array[n];
    cout<<"write elements of the array:-  ";
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int j = 1; j < n; j++)
    {
        int current=array[j];
        int k=j-1;
        while(array[k]>current && k>=0){
            array[k+1]=array[k];
            k--;
        }
        array[k+1]=current;
    }

    for (int l = 0; l < n; l++)
    {
        cout<<array[l]<<" ";
    }
    
    
    
    return 0;
}