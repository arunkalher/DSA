int findUnique(int *arr, int size)
{
    //Write your code here
    int answer=0;
    for(int i=0;i<size;i++)
    answer^=arr[i];
    return answer;
}