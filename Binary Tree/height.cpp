/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };
Expected time complexity :
The expected time complexity is O(n).


Constraints :
1 <= 'n' <= 10000

Time Limit: 1 second
************************************************************/
typedef TreeNode<int> Node;
int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root==nullptr)
    return 0;
    return max(heightOfBinaryTree(root->left),heightOfBinaryTree(root->right))+1;;
    
     
}
