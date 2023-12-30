/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 \Sample Input 1 :
3
1 2 3
3
4 5 6


Sample Output 1 :
5 7 9


Explanation for Sample Input 1 :
'num1' represents the number 321 and 'num2' represents 654. Their sum is 975.


Sample Input 2 :
2
0 1
1
0


Sample Output 2 :
0 1


Explanation for Sample Input 2 :
'num1' represents 10 and 'num2' represents 0. Their sum is 10.


Sample Input 3 :
1
2
2
9 9


Sample Output 3 :
1 0 1


Explanation for Sample Input 3 :
'num1' represents 2 and 'num2' represents 99. Their sum is 101.


Expected Time Complexity :
The expected time complexity is O('m' + 'n').


Constraints :
1 <= 'm', 'n' <= 5 * 10^4
0 <= 'data' in any Linked List node <= 9

The numbers do not contain any leading zeros.
If the number is zero, then there is one node having 'data' = 0.

Time Limit: 1 sec

intuition-
1 2 3 4
6 7 8
reverse
4 3 2 1
8 7 6
add 0 in last to shorter
4 3 2 1
8 7 6 0
add
2 1 9 1
reverse
1 9 1 2 <- answer

doesn't need to add 0 by the way can do without it


 *************************************************************************/

typedef Node<int> node;
node* reverse(node* head)
{
    node* nextt=nullptr;
    node* prev=nullptr;
    node* curr=head;
    while(curr!=nullptr)
    {
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    first=reverse(first);
    second=reverse(second);
    node* temp1=first;
    node* temp2=second;
    while(temp1->next!=nullptr || temp2->next!=nullptr)
    {
        if(temp1->next==nullptr)
        temp1->next=new node(0);
        if(temp2->next==nullptr)
        temp2->next=new node(0);
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1=first;
    temp2=second;
    int carry=0;
    int result=0;
    while(temp1->next!=nullptr)
    {
        result=temp1->data+temp2->data+carry;
        carry=result/10;
        temp1->data=result%10;
        temp1=temp1->next;
        temp2=temp2->next;
    }
    
    result=temp1->data+temp2->data+carry;
    
    temp1->data=result%10;
    if(result>9)
    {
        temp1->next=new node(result/10);
    }
    

    first=reverse(first);
    return first;
    

}


//second way


#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }
    };

************************************************************/
typedef Node<int> node;
node* reverse(node* head)
{
    node* nextt=nullptr;
    node* prev=nullptr;
    node* curr=head;
    while(curr!=nullptr)
    {
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    first=reverse(first);
    second=reverse(second);
    node* temp1=first;
    node* temp2=second;
    node* prev=nullptr;
    node* newhead=nullptr;
    int carry=0;
    int result=0;
    while(temp1!=nullptr || temp2!=nullptr)
    {
        if(temp1==nullptr)
        {
        result=temp2->data+carry;
        carry=result/10;
        temp2->data=result%10;
        prev=temp2;
        temp2=temp2->next;
        newhead=second;
        }
        else if(temp2==nullptr)
        {
        result=temp1->data+carry;
        carry=result/10;
        temp1->data=result%10;
        prev=temp1;
        temp1=temp1->next;
        newhead=first;
        } else {
        result = temp1->data + temp2->data + carry;
        carry = result / 10;
        temp1->data = result % 10;
        temp2->data = result % 10;
        prev=temp1;
        temp1 = temp1->next;
        temp2 = temp2->next;
        newhead=first;
        }
    }

    node* newtail=prev;
   
    

    if(carry)
    {
        newtail->next=new node(carry);
       
    }
    

    
    return reverse(newhead);
    

}