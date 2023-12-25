#include<bits/stdc++.h>


string cycleDetection (vector<vector<int>>& edges, int V, int E)
{
    // Write your code here.
    bool visited[V+1]={false};
    vector<int> arr[V+1];
    for(int i=0;i<E;i++)
    {
        arr[edges[i][0]].push_back(edges[i][1]);
        arr[edges[i][1]].push_back(edges[i][0]);

    }
    queue <int> q;
    for(int i=1;i<=V;i++)
    {   
        if(!visited[i])
    {
        int prev=-1;
    q.push(i);
    while (!q.empty())
    {
        int c = q.front();
        int size=q.size();
        while(size--)
        {
      int top = q.front();
      q.pop();
      if (visited[top])
        return "Yes";
        visited[top]=true;
        for (auto j : arr[top]) {
        if (j != prev && visited[j])
          return "Yes";
        else if (!visited[j])
          q.push(j);
        }
        }
        prev=c;
    }
    }
    }
    return "No";
}
