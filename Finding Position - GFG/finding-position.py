#User function Template for python3
class Solution:
    def nthPosition (self, n):
        c=0
        while(n):
            c+=1
            n=n>>1
        return 2**(c-1)
        # code here 


#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.nthPosition(n))
# } Driver Code Ends