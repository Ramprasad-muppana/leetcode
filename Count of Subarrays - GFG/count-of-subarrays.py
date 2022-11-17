#User function Template for python3
class Solution:
    def countSubarray(self,arr, n, k):
	    # code here
	    c=0
	    num=0
	    for i in range(n):
	        if(arr[i]>k):
	            num=i+1
	        c+=num
	    return c    


#{ 
 # Driver Code Starts
#Initial Template for Python 3


# Driver code 
if __name__ == "__main__": 		
    tc=int(input())
    while tc > 0:
        n, k=map(int, input().strip().split())
        arr=list(map(int, input().strip().split()))
        ob = Solution()
        ans=ob.countSubarray(arr, n, k)
        print(ans)
        tc=tc-1
# } Driver Code Ends