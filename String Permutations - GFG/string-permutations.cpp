//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
     void p(int n,string &S, string v, vector<string>&ds,int frq[])
	        { 
	            if(v.size() == n)
	            {
	                ds.push_back(v);
	                return;
	            }
	           for(int i = 0;i<n;i++)
	           {
	                if(frq[i]==0)
	                {
	                    frq[i]=1;
	                    v.push_back(S[i]);
	                    p(n,S,v,ds,frq);
	                    frq[i]=0;
	                    v.pop_back();
	                }
	            }
	        }
    vector<string> permutation(string S)
    {
        int n = S.size();
		vector<string>ds;
	    string v;
	    int frq[n]={0};
	    p(n,S,v,ds,frq);
	    sort(ds.begin(),ds.end());
	    return ds;
        //Your code herea
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends