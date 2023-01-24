//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string st)
    {
       stack<char>s;
        for(auto c:st){
            if(c==')' || c=='}' || c==']'){
                if(s.empty())
                    return false;
                else{
                    if(c==')' and s.top()=='(')
                        s.pop();
                    else if(c=='}' and s.top()=='{')
                        s.pop();
                    else if(c==']' and s.top()=='[')
                        s.pop();
                    else{
                        return false;
                    }
                }
            }
            else{
                s.push(c);
            }
        }

        if(s.empty())
            return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends