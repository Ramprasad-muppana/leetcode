//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D)
    {
        priority_queue<int>p1,p2;
        p1.push(A);
        p1.push(B);
        p2.push(C);
        p2.push(D);
        int c=0;
        while(!p1.empty())
        {
            if(p1.top()<=p2.top())
            {
                p1.pop();
                p2.pop();
            }
            else
            {
                int x=floor(p1.top()/2);
                p1.pop();
                p1.push(x);
                c++;
            }
        }
        return c;
    
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends