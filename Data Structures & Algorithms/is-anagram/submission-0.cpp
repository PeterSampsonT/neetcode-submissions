class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())
        return false;

        std::array<int,26> freq={0};

        for(size_t i=0;i<s.size();i++)
        {
            freq[(s[i]-'a')]++;
            freq[(t[i]-'a')]--;
        }
        
        for(const int&n :freq)
        {
            if(n!=0)
            return false;
        }
        return true;
    }
};
