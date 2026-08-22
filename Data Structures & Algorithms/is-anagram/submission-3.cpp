class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size())
        return false;

        std::array<int,26> count={0};
        for(size_t i=0;i<s.size();i++)
        {
            count[s[i]-'a']++;
            count[t[i]-'a']--;
        }

        for(size_t i=0;i<26;i++)
        {
            if(count[i])
            return false;
        }
        return true;
    }
};
