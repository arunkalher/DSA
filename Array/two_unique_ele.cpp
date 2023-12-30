class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xo=0;
        for(int i=0;i<nums.size();i++)
        xo^=nums[i];
        int first=0,second=0;
        int last_set=(xo)&(~(xo-1));
        for(int i=0;i<nums.size();i++)
        {
            if(last_set & nums[i])
            first^=nums[i];
            else
            second^=nums[i];
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(second);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};
