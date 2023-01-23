#User function Template for python3
class Solution:

    def findPair(self, arr, L,N):
            d={}
            arr.sort()
            for i in range(len(arr)):
                if arr[i] in d:
                   # print(d)
                    return 1
                else:
                    d[arr[i]+N]=i;
            #print(d)
            return 0;
                    


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        L,N = [int(x) for x in input().split()]
        arr = [int(x) for x in input().split()]

        solObj = Solution()

        if(solObj.findPair(arr,L, N)):
            print(1)
        else:
            print(-1)
# } Driver Code Ends