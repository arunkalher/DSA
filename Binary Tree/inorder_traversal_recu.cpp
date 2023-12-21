/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
Expected time complexity:
The expected time complexity is O(n).
Constraints :
1 <= 'n' <= 10^5
0 <= 'data' <= 10^5     

where 'n' is the number of nodes and 'data' denotes the node value of the binary tree nodes.

Time limit: 1 sec

*/
void inorder(TreeNode* node,vector<int>& v)
{
    if(node==nullptr)
    return;
    inorder(node->left,v);
    v.push_back(node->data);
    inorder(node->right,v);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    inorder(root,ans);
    return ans;

}