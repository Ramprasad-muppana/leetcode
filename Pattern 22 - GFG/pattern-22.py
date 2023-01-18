#User function Template for python3

class Solution:
    def printTriangle(self, N):
        t=0
        d=(2*N)-2
        l=0
        r=(2*N)-2
        for i in range((2*N)-1):
            for j in range((2*N)-1):
                s=min(i-t,d-i,j-l,r-j)
                print(N-s,end=" ")
            print() 
        # Code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N = int(input().strip())
        ob = Solution()
        ob.printTriangle(N)
# } Driver Code Ends