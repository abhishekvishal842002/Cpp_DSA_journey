

#include<iostream>
using namespace std;

int binarysearch(int array[],int size , int key){
    int s=0;
    int e=size;
    while (s<=e){
        int mid=(s+e)/2;

        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;

}

int main()
{
    int key;
    int n;
    int place;
    cout<<"enter the size of array:- ";
    cin>>n;
    int array1[n];
    cout<<"enter the elements of the array:- ";
    for (int i = 0; i < n; i++)
    {
        cin>>array1[i];
    }
    cout<<"enter your key";
    cin >> key;
    cout<<binarysearch(array1,n,key)<<endl;
    return 0;
}