#User function Template for python3
class Solution:

	def convert(self,arr, n):
	    so=sorted(arr)
	    l={}
	    for i in range(n):
	        l[so[i]]=i
	    for j in range(n):
	        arr[j]=l[arr[j]]
		# code here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.convert(arr, n)
        for x in arr:
            print(x, end=" ")
        print()
        tc -= 1

# } Driver Code Ends