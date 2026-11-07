class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;
        for(const std::string& str :tokens)
        {
            if(str=="+" || str=="-" || str=="*" || str=="/")
            {
                int a=s.top(); s.pop();
                int b=s.top(); s.pop();
                int c;

                switch(str[0])
                {
                    case '+':
                    c=b+a;
                    break;
                    case '-':
                    c=b-a;
                    break;
                    case '*':
                    c=b*a;
                    break;
                    case '/':
                    c=b/a;
                    break;
                }

                s.push(c);
            }
            else
            {
                s.push(std::stoi(str));
            }
        }
        return s.top();
    }
};
