import math
class Solution:
    def findCatalan(self, n : int) -> int:
        a = int((math.factorial(2*n))//(math.factorial(n+1)*math.factorial(n)))
        return a%1000000007
        # code here
        



#{ 
 # Driver Code Starts
if __name__=="__main__":
    t = int(input())
    for _ in range(t):
        
        n = int(input())
        
        obj = Solution()
        res = obj.findCatalan(n)
        
        print(res)
        

# } Driver Code Ends