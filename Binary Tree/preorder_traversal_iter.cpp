#include <bits/stdc++.h> 
/*
Following is the structure of Tree Node

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
*/


typedef TreeNode Node;

vector<int> preorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> ans;
    stack<Node*> s;
    s.push(root);
    while(!s.empty())
    {
        Node* curr=s.top();
        s.pop();
        if(curr->right)
        s.push(curr->right);
        if(curr->left)
        s.push(curr->left);
        ans.push_back(curr->val);

    }
    return ans;
}