#include <bits/stdc++.h> 
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(arr[j-1]>arr[j])
            swap(arr[j-1],arr[j]);
        }
    }
}
