bool dfs(int curr, vector<int>* arr, bool *visited,int prev) {
  if (visited[curr])
    return true;
    visited[curr]=true;
  for (int i=0;i<arr[curr].size();i++)
    {   
        int next=arr[curr][i];
        if(prev!=next && dfs(next,arr,visited,curr))
        return true;
    }
    return false;
}


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
    for(int i=1;i<=V;i++)
    {
        if(!visited[i] && dfs(i,arr,visited,-1))
        return "Yes";
    }
    return "No";
}
