/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
Sample Input 1 :
3 4 5 2 6 1 9 -1
3
Sample Output 1 :
3 4 5 6 1 9
Explanation of Sample Output 1 :
The data in the node with index 3 is 2 which has been removed.
Sample Input 2 :
3 4 5 2 6 1 9 -1
0
Sample Output 2 :
4 5 2 6 1 9
Constraints :
0 <= N <= 10^5
POS >= 0

Time Limit: 1sec
Expected Complexity :
Time Complexity  : O(N)
Space Complexity  : O(1)
*****************************************************************/

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node* temp=head;
	Node* prev=nullptr;
	while(temp!=nullptr && (pos))
	{
		prev=temp;
		temp=temp->next;
		pos--;
	}
	if(temp==nullptr)
	return head;
	Node* todel=nullptr;
	if(prev==nullptr)
	{
		todel=head;
		Node* tempp=head->next;
		delete(todel);
		return tempp;
	}
	todel=prev->next;
	prev->next=prev->next->next;
	delete(todel);
	return head;
	 
}


