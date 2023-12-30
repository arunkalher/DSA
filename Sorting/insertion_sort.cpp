#include <bits/stdc++.h> 
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
}