/*
edges conatains E tuples each showing a edge in ascending order
return array of arrays in ascending order
2<=V<=10^3
1<=E<=(5*(10^3))
*/


void dfs(int curr,vector<int>* arr,bool* visited,vector<int>& v)
{
    if(visited[curr])
    return;
    v.push_back(curr);
    visited[curr]=true;
    for(auto i:arr[curr])
    {
        if(!visited[i])
        dfs(i,arr,visited,v);
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> arr[V];
    for(int i=0;i<E;i++)
    {
        arr[edges[i][0]].push_back(edges[i][1]);
        arr[edges[i][1]].push_back(edges[i][0]);
    }
  
    bool visited[V]={false};
    vector<vector<int>> answer;
   
    for(int i=0;i<V;i++)
    {   
        if(!visited[i])
        {   vector<int> v;
            dfs(i,arr,visited,v);
            answer.push_back(v);
           
        }
    }
    
    return answer;

}