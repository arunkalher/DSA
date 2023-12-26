#include <bits/stdc++.h> 
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.

    //let's say for ith element answer will be-
    //if we are taking i-1 then arr[i]=arr[i-1]
    //if we are excluding i-1 then arr[i]=arr[i-2]+arr[i]
    //we have to take max of these

    //base cases
    if(nums.size()==1)
    return nums[0];
    int second=max(nums[0],nums[1]);
    if(nums.size()==2)
    return second;
    int first=nums[0];
    for(int i=2;i<nums.size();i++)
    {
        int temp=max(first+nums[i],second);
        first=second;
        second=temp;
    }
    return second;

    // or
    // if(nums.size()==1)
    // return nums[0];
    // nums[1]=max(nums[0],nums[1]);
    // if(nums.size()==2)
    // return nums[1];
    // for(int i=2;i<nums.size();i++)
    // {
    //     nums[i]=max(nums[i-2]+nums[i],nums[i-1]);
    // }
    // return nums[nums.size()-1];
}