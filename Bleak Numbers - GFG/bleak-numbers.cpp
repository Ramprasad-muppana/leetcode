//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    
    int set_count(int s)
    {
        int c = 0;
        while(s>0)
        {
            s=s&(s-1);
            c+=1;
        }
        return c;
    }
    
	int is_bleak(int n)
	{
	   for(int i=1;i<n;i++)
	   {
	       if(i+set_count(i) == n){
	           return 0;
	       }
	       
	   }
	   return 1;
	   
	    // Code here.
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends