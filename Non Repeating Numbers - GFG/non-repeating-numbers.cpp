//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int n=nums.size();
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
        vector<int>q;
        if(l>r)
        {
            q.push_back(r);
            q.push_back(l);
        }
        else
        {
            q.push_back(l);
            q.push_back(r);
        }
        return q;
        
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
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends