#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
Constraints-
1<=T<=5
0<=L<=10^5
1<=data<=10^9 and data!=-1
*****************************************************************/
typedef LinkedListNode<int> Node;
Node* reverse(Node* node)
{
    if(node->next==nullptr)
    return node;
    Node* newhead=reverse(node->next);
    node->next->next=node;
    return newhead;
}
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==nullptr || head->next==nullptr)
    return head;
    Node* newhead= reverse(head);
    head->next=nullptr;
    return newhead;
}