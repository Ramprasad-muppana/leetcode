class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cuurent = 0
        mxs =nums[0]
        for i in nums:
            cuurent+=i
            if(cuurent>mxs):
                mxs = cuurent 
            if(cuurent <0):
                cuurent =0
        return  mxs