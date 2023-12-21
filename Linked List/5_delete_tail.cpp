/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 Expected Time Complexity:
Try solving this in O(N).


Constraints:
2 <= 'N' <= 10^4
0 <= list elements <= 10^5

Time Limit: 1 sec
 */

Node *deleteLast(Node *head){
    // Write your code here
    Node* temp=head;

    //iterate to second last node
    while(temp->next->next!=nullptr)
    temp=temp->next;

    //store last node
    Node* todel=temp->next;

    //remove tail
    temp->next=nullptr;

    // delte last node
    delete(todel);
    return head;
}