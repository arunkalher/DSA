#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int arr[m][n]={0};
	
	for(int i=0;i<m;i++)
	{
		arr[i][0]=1;
	}
	for(int i=0;i<n;i++)
	{
		arr[0][i]=1;
	}
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<n;j++)
		arr[i][j]=arr[i-1][j]+arr[i][j-1];
	}
	return arr[m-1][n-1];
	
}

//we can optimize space , instead of 2d array just 1d array for entire previous row and one variable for prev row element
#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	vector<int> arr(n,1);
   
	
	for(int i=1;i<m;i++)
	{
        int prev=1;
        for (int j = 1; j < n; j++) {
          arr[j] = arr[j] + prev;
          prev = arr[j];
        }
    }
  
	return arr[n-1];
	
}