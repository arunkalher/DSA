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
Create an empty stack (say S).
Initialize the current node as root.
Push the current node to S and set current = current->left until current is NULL
If current is NULL and the stack is not empty then:
Pop the top item from the stack.
Print the popped item and set current = popped_item->right 
Go to step 3.
If current is NULL and the stack is empty then we are done.
*/

vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
      stack<Node* > s;
    vector<int> ans;
    if(root==nullptr)
    return ans;
    s.push(root);
    Node* curr=root;
    while(!s.empty())
    {   
        while(curr->left)
        {
            s.push(curr->left);
            curr=curr->left;
        }
        Node* t=s.top();
        s.pop();
        ans.push_back(t->data);
        if (t->right) {
            curr = t->right;
            s.push(curr);
        }
    }

}