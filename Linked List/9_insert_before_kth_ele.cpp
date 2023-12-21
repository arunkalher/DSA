/************************************************************

    Following is the LinkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};
Sample Input 2 :
2
2
1 2 -1
3 0
2
3 4 -1
5 1
Sample Output 2 :
3 1 2  
3 5 4

Constraints-
1<=T<=10
1<=N<=10^4
0<=POS<=N
1<=data,VAL<=10^&


************************************************************/

Node * insert(Node * head, int n, int pos, int val) {
    // Write your code here

     Node* temp=head;
    Node* prev=nullptr;
    while(pos--)
    {
        prev=temp;
        temp=temp->next;
    }
    if (prev==nullptr)
    {
        Node* newhead=new Node(val);
        newhead->next=head;
        return newhead;

    }
    Node* store_next=temp;
    prev->next=new Node(val);
    prev->next->next=store_next;
    return head;
}