long long maxi=0,curr_sum=0;

long long maxSubarraySum(vector<int> arr, int n)
{   
    // Write your code here.
        for(int i=0;i<n;i++)
        {
            curr_sum+=arr[i];
            if(curr_sum<0)
            curr_sum=0;
            maxi=max(maxi,curr_sum);
        }
        return maxi;
}