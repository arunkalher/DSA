#include <bits/stdc++.h> 

vector<int> topologicalSort(vector<vector<int>> &edges, int V, int e)  {
    // Write your code here
    int arr[V]={0};
    vector<int> adj[V];
    for (int i = 0; i < e; i++) {
      arr[edges[i][1]] += 1;
      adj[edges[i][0]].push_back(edges[i][1]);
    }
    queue<int> q;
    vector<int> answer;
    for(int i=0;i<V;i++)
    if(arr[i]==0) q.push(i);
    while(!q.empty())
    {
        int top=q.front();
        answer.push_back(top);
        q.pop();
        for(auto j:adj[top])
        {
            arr[j]-=1;
            if(arr[j]==0) q.push(j);
        }

    }
    return answer;
}