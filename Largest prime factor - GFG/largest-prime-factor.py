#User function Template for python3

class Solution:
    def largestPrimeFactor (self, N):
        maxi = 2
        while(maxi * maxi <= N):
            if(N % maxi == 0):
                N = N/maxi;
            else:
                maxi+=1
        return int(N);
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.largestPrimeFactor(N))
# } Driver Code Ends