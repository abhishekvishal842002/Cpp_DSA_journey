// isyana is given the number of visitors at her local theme park on N consecutive days.
// the number of visitors on the i-th day is Vi. 
// a day is record breaking if n satisfies both the following conditions:
// condition 1:- the number of visitors of the day is strictly larger than the number of visitors on each of the previous day.
// condition 2:- either it is the last day, or the number of viitors on the day is strictly larger than the number of visitors on the following day.
// note that the very first day could be a record breaking day!
// please help isyana find out the number of record breking days.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }

    int prev_max_visitors=array[0];
    int rec_br_day=0;
    for (int i = 0; i < n; i++)
    {
        if ((array[i+1]>prev_max_visitors)||((array[i+1]>prev_max_visitors)&&(array[i+1]>array[i+2])))
        {
            prev_max_visitors=array[i+1]; 
            rec_br_day++; 
        }
        
    }
    cout<<rec_br_day;
    

    return 0;
}