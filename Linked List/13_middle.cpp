/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
Constraints :
1 <= 'N' <= 10^4
0 <= 'data' <= 10^3 

Where 'N' is the length of the linked list.

Time Limit: 1 sec
if even return second middle node
*/

Node *findMiddle(Node *head) {
    // Write your code here
    Node* slow=head,fast=head;
    while(fast!=nullptr || fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

