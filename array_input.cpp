// Q. write a program which takes an array in input and print the max and min val stored in that array.



// my approach in solving the problem;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
    
//     cout<<"write the size of the aray.\n";
//     cin>>n;
//     cout<<"write the elements of the array.\n";
//     int array1[n];
//     for (int i=0;i<n;i++){
//         cin>>array1[i];
//     }
//     // for (int j=1;j<=n;j++){
//     //     cout<<array1[j]<<" ";

//     // }
//     int max=array1[1];
//     int min=array1[1];
//     for (int k = 0; k < n; k++)
//     {
//         if (array1[k] > max)    
//         {
//             max=array1[k] ;
//         }
//         if ( array1[k] < min)
//         {
//             min=array1[k] ;
//         }
//     }
//     cout<<max<<"\n";
//     cout<<min<<endl;
//     return 0;
// }




// other's approach

#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    
    cout<<"write the size of the aray.\n";
    cin>>n;
    cout<<"write the elements of the array.\n";
    int array1[n];
    for (int i=0;i<n;i++){
        cin>>array1[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for (int k = 0; k < n; k++)
    {
        if (array1[k] > max)    
        {
            max=array1[k] ;
        }
        if ( array1[k] < min)
        {
            min=array1[k] ;
        }
    }
    cout<<max<<"\n";
    cout<<min<<endl;
    return 0;
}