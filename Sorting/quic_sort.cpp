#include <bits/stdc++.h> 
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
void quicksort(vector<int>& arr,int start,int end)
{
    if(start>=end)
    return;
    int swapping_pos=start;
    int pivot=arr[end];
    for(int i=start;i<end;i++)
    {
    if (arr[i] < pivot) {
      swap(arr[i], arr[swapping_pos]);
      swapping_pos += 1;
    }              
    }  
    swap(arr[end],arr[swapping_pos]); 
    quicksort(arr, start, swapping_pos-1);
    quicksort(arr, swapping_pos+1,end);

}
vector<int> quickSort(vector<int> arr)
{
    // Write your code here.
    quicksort(arr,0,arr.size()-1);
    return arr;
}
