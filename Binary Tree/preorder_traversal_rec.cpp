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
void preorder(Node* &node,vector<int> &ans)
{if(node==nullptr)
return;
ans.push_back(node->val);
preorder(node->left,ans);
preorder(node->right,ans);

}
vector<int> preorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> ans;
    preorder(root,ans);
    return ans;

}