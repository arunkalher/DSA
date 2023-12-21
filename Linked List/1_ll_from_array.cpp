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
 */
//  Constraints:
// 1 <= ‘N’ <= 10^4
// 1 <= ‘Arr[i]’ <= 10^5

Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++)
    {   
        //itearting over arr and adding in linked list
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;
}