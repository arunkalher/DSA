/*

Sample Input 1:
2
4
10 20 30 10
3
10 50 10
Sample Output 1:
20
0*/

#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &arr)
{
    // Write your code here.
    if(n==1)
    return 0;
    if(n==2)
    return arr[1]-arr[0];
    int first=0;
    int second=abs(arr[1]-arr[0]);
    for(int i=2;i<n;i++)
    {
        int temp=min(first+abs(arr[i]-arr[i-2]),second+abs(arr[i]-arr[i-1]));
        first=second;
        second=temp;
    }
    return second;

}