class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::string> sorted=strs;

        for(std::string& str:sorted)
        {
            std::sort(str.begin(),str.end());
        }

        std::unordered_map<std::string,int> map;
        std::vector<std::vector<std::string>> out;
        int k=0;

        for(int i=0;i<sorted.size();i++)
        {
            auto e=map.find(sorted[i]);
            if(e==map.end())
            {
                out.push_back({strs[i]});
                map[sorted[i]]=k;
                k++;
            }
            else
            {
                out[map[sorted[i]]].push_back({strs[i]});
            }
        }
        return out;
    }
};
