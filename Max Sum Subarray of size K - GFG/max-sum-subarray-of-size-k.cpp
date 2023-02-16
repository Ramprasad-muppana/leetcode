//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int n)
    {

        long mxl =0;
        int j;
        long s = 0;
        
        for(j = 0 ; j < K ; j++){
            s+=arr[j];
        }
        
        if(mxl<s) mxl = s;
        
        int i = 0;
        j = K;
        while(j < n)
        {
            s+=arr[j++];
            s-=arr[i++];
            if(mxl<s){
                mxl=s;
            }

        }
        return mxl;
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends