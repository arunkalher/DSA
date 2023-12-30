#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int ans=-1;
	int curr=0;
	for(int i=0;i<n;i++)
	{
		if (curr==0)
		{
			curr+=1;
			ans=arr[i];
		}
		else{
			if(arr[i]==ans)
			curr+=1;
			else
			{
				curr-=1;
			}
		}
	}
	int count=0;
	for(int i=0;i<n;i++)
	if(arr[i]==ans) count++;
	if(count>n/2)
	return ans;
	else return -1;
}