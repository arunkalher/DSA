/****************************************************************

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
0 <= N <= 10^5
Time Limit: 1 sec
*****************************************************************/

int length(Node *head)
{
	//Write your code here
    int length=0;
    while(head!=nullptr)
    {   
        //increment length by 1 for each node
        head=head->next;
        length++;
    }
    return length;

}