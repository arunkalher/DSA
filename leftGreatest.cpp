#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
    
    stack<int> s;
    int n;
    cout<<"Enter n";
    cin>>n;
             
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        while(!s.empty() and s.top()<arr[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            ans.push_back(-1);
            s.push(arr[i]);
            continue;
        }
        ans.push_back(s.top());
        s.push(arr[i]);
               
    }
    for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        } 
}