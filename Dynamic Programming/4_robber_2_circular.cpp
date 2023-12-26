#include <bits/stdc++.h> 
"""
robber can rob both first and last houses.
first calculate excluding first then calculate excluding second then then max of these
"""
long long int houseRobber(vector<int>& nums)
{
    // Write your code here.
   
    if(nums.size()==1)
    return nums[0];
    
    if(nums.size()==2)
    return nums[1];
    long long first=nums[0];
    long long second=max(nums[0],nums[1]);   
    for(int i=2;i<nums.size()-1;i++)
    {
        long long temp=max(first+nums[i],second);
        first=second;
        second=temp;
    }
    long long ans1=second;
    first=nums[1];
    second=max(nums[1],nums[2]);
     for(int i=3;i<nums.size();i++)
    {
        long long temp=max(first+nums[i],second);
        first=second;
        second=temp;
    }
    long long ans2=second;
    return max(ans1,ans2);

}