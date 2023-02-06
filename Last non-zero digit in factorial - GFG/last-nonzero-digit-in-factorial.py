#User function Template for python3
class Solution:
    
    def lastNon0Digit (self, N):
        def fact(n):
            if(n==0):
                return 1
            else:
                return n*fact(n-1)
            
        x=fact(N)
        while(x!=0):
            if(x%10==0):
                x=x//10
            else:
                return x%10
        # code here
    



#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__': 
    ob = Solution()
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ans = ob.lastNon0Digit(N);
        print(ans)




# } Driver Code Ends