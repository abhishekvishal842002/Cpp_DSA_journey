// given an unsorted array A of size N of non- negative integers ,
//  find a continuous subarray which adds to a given number S. 



// MY APPROACH NOT OPTIMISED TIME COMPLEXITY (N^2)


// #include<iostream>
// using namespace std;
// int main()
// {
//     // unsorted array of non negative integers.
//     int N;
//     int S;
//     cout<<"size of array:- ";
//     cin>>N;
//     cout<<"elements of array :- ";
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         cin>>A[i];
//     }


//     cout<<"enter a number :- ";
//     cin>>S;

//     int sum=A[0];
//     int start=-1;
//     int end=-1;

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = i+1; j < N; j++)
//         {
//             sum+=A[j];
//             if (sum==S){
//                 start=i;
//                 end=j;
//                 break;
//             }
//         }
//         sum=A[i+1];
        
//     }

//     for (int i = start; i <= end; i++)
//     {
//         cout<<A[i]<<" ";
//     }

//     return 0;
// }



// OPTIMISED APPROACH | TIME COMPLEXITY (2N)

#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"size:- ";
    cin>>N;
    cout<<"elements :-";
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    int S;
    cout<<"val of S:- ";
    cin>>S;

    int i=0, j=0, start=-1, end=-1, sum=0;

    while(j<N && sum+A[j]<=S){
        sum+=A[j];
        j++;
    }

    if(sum == S){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<N){
        sum+=A[j];
        while(sum>S){
            sum-=A[i];
            i++;
        }

        if (sum==S){
            start=i+1;
            end=j+1;
            break;
        }
        j++;
    }

    cout << start <<" " << end <<endl;

    return 0;
}   