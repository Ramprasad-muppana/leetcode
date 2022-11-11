#User function Template for python3
class Solution:
    def isSumOfTwo (self, n):
        def isprime(n):
            if n<=1:
                return False
            else:
                for i in range(2,int(n**0.5)+1):
                    if(n%i==0):
                        return False
                return True
        
        if(isprime(n-2)):
            return "Yes"
        if(n%2==0):
            return "Yes"
        return "No"
        # code here 
        

#{ 
 # Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.isSumOfTwo(N))
# } Driver Code Ends