#include<iostream>
using namespace std;
int main()
{
    int key;
    int found=0;
    cout<<"enter the key";
    cin>>key;
    int array1[]={1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99,12,23,34,45,56,67,78,89};
    for (int i = 0; i < 26; i++)
    {
        if (key==array1[i])
        {
            cout<<"found at "<<i<<endl;
            found++;
        }
        else{
            continue;
        }
    }
    if (found==0){
        cout<<"not found\n";
    }
    
    return 0;
}