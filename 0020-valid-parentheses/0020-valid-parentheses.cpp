class Solution {
public:
    bool isValid(string st) {
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