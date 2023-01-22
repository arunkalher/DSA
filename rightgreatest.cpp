#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    int n=7;
    int arr[n]={5,7,2,1,3,6,9};
    
    stack<int> s;
    vector<int> ans;
    for (int i=n-1;i>=0;i--)
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
    for(int i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        } 
}
