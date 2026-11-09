class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> out(temperatures.size(),0);
        std::vector<int> v;
        v.reserve(temperatures.size());
        std::stack<int> st;

        for(int i=0;i<temperatures.size();i++)
        {
            while(!st.empty() && temperatures[st.top()]<temperatures[i])
            {
                out[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return out;
    }
};
