//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void p (int n, int open, int close ,string s,vector<string>&st)
    {
        if(open == n and close == n)
        {
            st.push_back(s);
            return;
        }
        if(open  < n)
        {
            p (n,open+1,close,s+"(",st);
        }
        if(close < open){
            p (n,open,close+1,s+")",st);
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        int open=0;
        int close=0;
        string s="";
        vector<string>st;
        p(n,open,close,s,st);
        return st;
        // Your code goes here 
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends