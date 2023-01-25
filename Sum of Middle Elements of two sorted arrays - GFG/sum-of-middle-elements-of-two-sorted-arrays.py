#User function Template for python3

class Solution:
	def findMidSum(self, ar1, ar2, l): 
	    arr3 = ar1+ar2

        arr3.sort()

        return arr3[(2*l)//2] + arr3[((2*l)//2)-1]
		# code here 


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n=int(input())
        ar1=list(map(int, input().strip().split()))
        ar2=list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.findMidSum(ar1, ar2, n)
        print(ans)
        tc=tc-1

# } Driver Code Ends