

/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };
Expected Time Complexity:
Try solving this in O(L).


Constraints:
1 <= 'L' <= 10^5
1 <= 'data' <= 10^9 and 'data' != -1
1 <= 'K' <= 10^9   

Where 'L' represents the total number of nodes in the Linked List, 'data' represents the value at each node, and 'K' is the given integer.

Time Limit: 1 sec.
return 1 if k exists else return -1
*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    while(head!=nullptr)
    {   
        // if node found return 1
        if (head->data==k)
        return 1;
        head=head->next;
    }
    // if node not found return 0
    return 0;

}