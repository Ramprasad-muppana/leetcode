//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int getSingle(int nums[], int n)
	{
        int l = 0;
        int r = 0;
        int ans = 0;
        int first_set = 0;
        for(int i=0;i< n ;i++)
        {
            ans^=nums[i];
        }
        while(ans)
        {
            if(ans&1) break;
            first_set++;
            ans = ans >> 1;
            
        }
        
        for(int i = 0; i<n ;i++)
        {
            if((nums[i]>>first_set)&1)
            {   
                l^=nums[i];
            }
            else{
                r^=nums[i];
            }
        }
        if(l==0){
            return r;
        }
        else{
            return l;
        }
        
       
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getSingle(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends