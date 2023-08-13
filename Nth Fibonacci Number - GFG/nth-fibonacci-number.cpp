//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n)
    {
        long long int a = 0;
        long long int b = 1;
        long long int c;
        for(int i = 2 ; i<=n ;i++)
        {
            c = (a+b)%1000000007;
            a = b;
            b = c;
        }
        return c%1000000007;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends