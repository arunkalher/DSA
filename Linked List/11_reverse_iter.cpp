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
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    if(head==nullptr || head->next==nullptr)
    return head;
    Node* curr=head;
    Node* prev=nullptr;
    Node* nextt=nullptr;    
    while(curr!=nullptr)
    {   
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
}