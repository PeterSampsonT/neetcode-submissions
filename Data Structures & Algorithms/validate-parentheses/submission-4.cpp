class Solution {
public:
    bool isValid(string s) {
        std::stack<int> a;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            a.push(s[i]);
            else if(!a.empty())
            {
                switch(s[i])
                {
                    case ')':
                        if(a.top()!='(')
                        return false;
                        a.pop();
                        break;
                    case '}':
                        if(a.top()!='{')
                        return false;
                        a.pop();
                        break;
                    case ']':
                        if(a.top()!='[')
                        return false;
                        a.pop();
                        break;
                    default:
                        return false;
                }
            }
            else
            return false;
        }
        if(!a.empty())
        return false;
        return true;
    }
};
