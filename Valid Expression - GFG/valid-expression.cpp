//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string st)
{
    stack<char>s;
        for(auto c:st){
            if(c==')' || c=='}' || c==']'){
                if(s.empty())
                    return 0;
                else{
                    if(c==')' and s.top()=='(')
                        s.pop();
                    else if(c=='}' and s.top()=='{')
                        s.pop();
                    else if(c==']' and s.top()=='[')
                        s.pop();
                    else{
                        return 0;
                    }
                }
            }
            else{
                s.push(c);
            }
        }

        if(s.empty())
            return 1;
        return 0;
    // code here
}