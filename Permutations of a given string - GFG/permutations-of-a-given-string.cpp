//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void p(int n,string &S, string v, map<string,int>&mp ,int frq[])
	        { 
	            if(v.size() == n)
	            {
	                mp[v]++;
	                return;
	            }
	           for(int i = 0;i<n;i++)
	           {
	                if(frq[i]==0)
	                {
	                    frq[i]=1;
	                    v.push_back(S[i]);
	                    p(n,S,v,mp,frq);
	                    frq[i]=0;
	                    v.pop_back();
	                }
	            }
	        }
	   
		vector<string>find_permutation(string S)
		{
		    int n = S.size();
		    map<string,int>mp;
		    string v;
		    int frq[n]={0};
		    vector<string>st;
		    p(n,S,v,mp,frq);
		    for(auto x :mp)
		    {
		        st.push_back(x.first);
		    }
		    return st;
		    // Code here there
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends