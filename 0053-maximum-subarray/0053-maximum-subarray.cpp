class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int cuurent = 0;
        int mxs =nums[0];
        for(auto i:nums)
        {
            cuurent+=i;
            if(cuurent>mxs)
            {
                mxs = cuurent;
            }
            if(cuurent <0)
            {
                cuurent =0;
            }
        }
        return  mxs;
        
    }
};