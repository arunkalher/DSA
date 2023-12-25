/*
Sample Input 1:
2
2 1
1 0
3 2
0 1
0 2
Sample Output 1:
1 0
0 2 1
Explanation of Sample Input 1:
Test case 1:
The number of vertices ‘V’ = 2 and number of edges ‘E’ = 1.
*/

#include <bits/stdc++.h> 
void dfs(vector<int>* arr,bool* visited,int curr,stack<int>& s)
{
    if(visited[curr])
    return;
    visited[curr]=true;
   
    for(auto j:arr[curr])
    {
        if(!visited[j])
        dfs(arr,visited,j,s);
    }
    s.push(curr);
}
vector<int> topologicalSort(vector<vector<int>> &edges, int V, int e)  {
    // Write your code here
    vector<int> arr[V];
    for(int i=0;i<e;i++)
    {
        arr[edges[i][0]].push_back(edges[i][1]);
    }
    bool visited[V]={false};
    stack<int> s;
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
        dfs(arr,visited,i,s);
    }
    vector<int> ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}