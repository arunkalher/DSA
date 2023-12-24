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
Expected Time Complexity:
Try to do this in O(n).


Constraints:
1 <= n <= 10000

Where 'n' is the total number of nodes in the binary tree.

Time Limit: 1 sec
************************************************************/

typedef TreeNode<int> Node;
int diameter(Node* node,int& h)
{
    if(node==nullptr)
    return 0;
    int lh=0,rh=0;
    int ld=diameter(node->left,lh);
    int rd=diameter(node->right,rh);
    h=max(lh,rh)+1;
    return max(max(ld,rd),lh+rh);

}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int h=0;
    return diameter(root,h);

}
