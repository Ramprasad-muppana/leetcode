//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        if((N&1)==0) return 0;
        int ans = 0;
        for(int i = 0; i< N ;i++)
        {
            if((i+1)&1) ans^=A[i];
        }
        return ans;
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends