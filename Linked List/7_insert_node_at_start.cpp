/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 Sample Input 2:
5 5
4 3 2 1 5
 Sample Output 2:
5 4 3 2 1 5
Explanation Of Sample Input 2:
Input: ‘N’ = 5, ‘newValue’ = 5
‘list’ = 4 -> 3 -> 2 -> 1 -> 5

Output: 5 4 3 2 1 5

Explanation: Linked List after inserting the newValue is 5 -> 4 -> 3 -> 2 -> 1 -> 5.
Constraints:
1 <= 'N' <= 10^4
0 <= list elements <= 10^5
0 <= 'newValue' <= 10^5

Time Limit: 1-sec
 */

Node* insertAtFirst(Node* head, int newValue) {
    // Write your code here
    Node* temp=new Node(newValue);
    temp->next=head;
    return temp;

}