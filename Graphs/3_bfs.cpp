/*
bfs from left to right for each node ( order in which present in adj)
*/


vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    // Write your code here.
    vector<int> ans;
    queue<int> q;
    q.push(0);
    bool visited[n] = { false };
    while (!q.empty()) {
      int front = q.front();
      
      q.pop();
      if(visited[front])
      continue;
      ans.push_back(front);
      visited[front]=true;
      for (auto i : adj[front]) {
          if(!visited[i])
            q.push(i);
      }
    }
    return ans;
}