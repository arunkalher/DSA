#include <bits/stdc++.h> 
void swap(int &i,int &j)
{
    int temp=i;
    i=j;
    j=temp;
}
void heapify(int curr,int total,vector<int>& arr)
{
	if(curr>=total || curr<=0)
	return;
	int parent=(curr-1)/2;
	if(arr[parent]>arr[curr])
	{
		swap(arr[curr],arr[parent]);
		heapify(parent,total,arr);
	}
	
}
void heapify_down(int curr,vector<int>& arr,int len)
{
	int lchild=2*curr+1;
	int rchild=2*curr+2;
	int to_check=0;
	if((lchild>=len) && (rchild>=len))
	return;
	if (lchild<len && rchild<len)
	{
		if(arr[rchild]<arr[lchild])
		to_check=rchild;
		else
		to_check=lchild;
	}
	else if(lchild<len)
	{
		to_check=lchild;
	}
	else
	to_check=rchild;
	if(arr[to_check]<arr[curr])
	{
		swap(arr[to_check],arr[curr]);
		heapify_down(to_check,arr,len);
	}
}
void heapsort(vector<int>& arr,vector<int>& answer)
{
	if(arr.size()==0)
	return;
    for (int i = arr.size() - 1; i >= 0; i--) {

        answer.push_back(arr[0]);
        arr[0] = arr[i];;
        heapify_down(0, arr,i);
    }
}
vector<int> heapSort(vector<int>& arr, int n) {
	// Write your code here.
	for(int i=0;i<n;i++)
	heapify(i,n,arr);
	vector<int> answer;
	heapsort(arr,answer);
	return answer;
}