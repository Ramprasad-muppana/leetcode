#User function Template for python3

def missingNumber( A, N):
    s=0
    su=0
    for i in range(1,N+1):
        s+=i
    for i in A:
        su+=i
    return abs(s-su)
     # Your code goes here


#{ 
 # Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(missingNumber(a, n))

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends