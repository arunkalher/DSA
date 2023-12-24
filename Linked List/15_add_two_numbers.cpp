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
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
}
