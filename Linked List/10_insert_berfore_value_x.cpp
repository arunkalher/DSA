/****************************************************************
Following is the Linked list node structure already written

class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    { 
        this->data = data;
        next = NULL;
    }
Sample Input 2:
4
10 20 30 40
25
30
Sample Output 2:
10 20 25 30 40
Explanation Of Sample Input 2 :
In the provided linked list, we insert '25' immediately before '30', resulting in the list 10 -> 20 -> 25 -> 30 -> 40.


Expected Complexity:
Time Complexity: O(n)
Space Complexity: O(1)


Constraints:
1 <= 'n' <= 10^4
1 <= 'x', 'val', linked list node values <= 10^4
The linked list is guaranteed to contain a node with the value 'val'.
};
*****************************************************************/

Node* insertBeforeValue(Node* head, int x, int val){
    // Write your code here.

    if(head->data==val)
    {
        Node* newhead=new Node(x);
        newhead->next=head;
        return newhead;
    }

    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr && temp->data!=val)
    {
        prev=temp;
        temp=temp->next;
    }
    Node* store_next=prev->next;
    prev->next=new Node(x);
    prev->next->next=store_next;
    return head;

}
