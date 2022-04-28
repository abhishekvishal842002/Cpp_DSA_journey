// ------------ARITHMETIC ARRAY---------------------------------------
// an arithmetic array is an array that contains at least two 
// integers and the differences between consequtive integers are equal.
//  for example ,[9,10]'[3,3,3],and [9,7,5,3] are arithmetic arrays.
// while[1,3,3,7],[2,1,2],and [1,2,4]are not arithmetic arrays.

// QUESTION
// saraswati has an array of N non-negative integers.
// the i-th integer of the array is A.
//  she wants to choose a contiguous arithmtic subarray from her array
//  that has the maximum length.
// please help her to determine the length of the longest contiguous arithmetic subarray.

// -------------------SOLUTION--------------------------------------------------------------
#include<iostream>
using namespace std;
int main()
{
    int n;
    // int diff=0;
    // int ndiff=-1;
    cout<<"enter size  ";
    cin>>n;
    cout<<"enter elements:-  ";
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }


    int len_longest_array=2;
    int prev_comm_diff=array[1]-array[0];
    int curr_long_streak=2;

    int j=2;
    while(j<n){
        if (array[j]-array[j-1]==prev_comm_diff){
            curr_long_streak++;
        }
        else{
            prev_comm_diff=array[j]-array[j-1];
            curr_long_streak=2;
        }
        len_longest_array=max(len_longest_array,curr_long_streak);
        j++;
    }
    cout<<len_longest_array<<endl;
    return 0;
}