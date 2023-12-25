/*
Sample Input 1 :
4 5
0 1 1 0 0
1 0 0 1 0
0 0 1 0 0
1 0 0 0 1
Sample Output 1 :
3
Explanation For Sample Input 1 :
The first island of connected 1s is signified by: {0, 1}, {0, 2}, {1, 0}, {1, 3}, {2, 2}.

The second island being: {3, 0}.

The third island being: {3, 4}.
Sample Input 2 :
4 4
1 0 0 1
0 1 1 0
0 1 1 0
1 0 0 1
Sample Output 2 :
1

*/

int dx[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[8]={-1,0,1,-1,0,1,1,-1};
void helper(int** arr, int rows, int columns,int currRow,int currCol)
{
   
   arr[currRow][currCol]=0;
   for(int i=0;i<8;i++)
   {
      int newRow=currRow+dx[i];
      int newCol=currCol+dy[i];
      if(newRow>=0 && newRow<rows && newCol<columns && newCol>=0 && arr[newRow][newCol]==1)
      {
         helper(arr,rows,columns,newRow,newCol);
      }
   }

}
int getTotalIslands(int** arr, int rows, int columns)
{
   // Write your code here.
   int answer=0;
   for(int i=0;i<rows;i++)
   {
      for(int j=0;j<columns;j++)
      {
         if(arr[i][j]==1)
         {
            helper(arr,rows,columns,i,j);
            answer++;
         }
      }
   }
   return answer;

}
