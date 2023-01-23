class Solution:
    def leftRotate(self, arr, k, n):
        arr[::]=arr[k%n:]+arr[0:k%n]
        return arr
        # Your code goes here


#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    t=int(input())
    for _ in range(0,t):
        l=list(map(int,input().split()))
        n=l[0]
        k=l[1]
        a = list(map(int,input().split()))
        ob = Solution()
        ob.leftRotate(a,k,n)
        print(*a)
# } Driver Code Ends