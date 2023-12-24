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
*/
typedef TreeNode Node;

vector<int> postorderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    if(root==nullptr)
    return ans;
    stack<Node*> st1;
    stack<Node*> st2;
    st2.push(root);
    while(!st2.empty())
    {
        Node* top=st2.top();
        st2.pop();
        st1.push(top);
        if(top->left)
        st2.push(top->left);
        if(top->right)
        st2.push(top->right);

    }

    while(!st1.empty())
    {
        ans.push_back(st1.top()->data);
        st1.pop();
    }
    return ans;

}