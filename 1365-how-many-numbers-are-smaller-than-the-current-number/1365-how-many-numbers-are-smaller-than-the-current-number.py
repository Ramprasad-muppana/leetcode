class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        d=[]
        for i in range(len(nums)):
            c=0
            for j in range(len(nums)):
                if i!=j and nums[j]< nums[i]:
                    c+=1
            d.append(c)
        return d
    
    