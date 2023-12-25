
/*
Sample Input 1 :
2
2
3
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
Sample Input 2 :
2
4
5
Sample Output 2 :
5
8
*/
#include <bits/stdc++.h> 
int countDistinctWays(int n) {
    //  Write your code here.
    if(n==0 || n==1)
    return 1;
 
    int first=1;
    int second=1;
   
    for(int i=2;i<=n;i++)
    {
        int temp=(first+second)%1000000007;
        second=first%1000000007;
        first=temp;
    }
    return first;
}