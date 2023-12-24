/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
     queue<TreeNode<int>*> q;
    vector<int> ans;
    if(!root)
    return ans;
    q.push(root);
    while(!q.empty())
    {
        TreeNode<int>* top=q.front();
        if(top->left)
        q.push(top->left);
        if(top->right)
        q.push(top->right);
        q.pop();
        ans.push_back(top->data);
    }
    return ans;
}
