/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
    };
Sample Input 2 :
5 27
24 76 65 54 40 
Sample Output 2 :
24 76 65 54 40 27 
Constraints :
1 <= 'n' <= 10^4
1 <= 'a[i]',k <= 10^9 where a[i] are the values in list and k is the value being added.

Time Limit: 1 sec
Expected Complexity :
Time Complexity : O(N)
Space Complexity : O(1)
************************************************************/

Node* insertEnd(Node* head, int k) {
    // Write your code here.
    if(head==nullptr)
    return new Node(k);
    
    Node* temp=head;
    while(temp->next!=nullptr)
    temp=temp->next;
    temp->next=new Node(k);
    return head;