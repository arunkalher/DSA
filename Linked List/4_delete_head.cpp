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
1 <= ‘n’ <= 10^5
1 <= 'data' <= 10^9

where 'data' is the values of node in a linked list.
Time Limit: 1 sec
*/

Node * deleteHead(Node *head) {
    // Write your code here.

    //store head
    Node* temp=head;
    //assign head to head->Lnext
    head=head->next;

    //delete prev head
    delete(temp);
    return head;
}
