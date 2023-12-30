"""
https://www.geeksforgeeks.org/selection-sort/

"""

#include <bits/stdc++.h> 
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i=0;i<n;i++)
    {   int min=arr[i];
        int min_indx=i;
        for(int j=i;j<n;j++)
        {
            if (arr[j]<min){
                min=arr[j];
                min_indx=j;
            }
        }
        if(min_indx!=i)
        swap(arr[i],arr[min_indx]);
    }
}