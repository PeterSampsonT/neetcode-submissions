class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::string> sorted=strs;

        for( int i=0;i<strs.size();i++)
        {
            sort(sorted[i].begin(),sorted[i].end());
        }

        std::unordered_map<std::string,int> map;
        std::vector<std::vector<std::string>> output;
        int k=0;

        for(int i=0;i<strs.size();i++)
        {
            auto e=map.find(sorted[i]);
            if(e!=map.end())
            {
                output[e->second].push_back({strs[i]});
            }
            else
            {
                output.push_back({strs[i]});
                map[sorted[i]]=k;
                k++;
            }
        }
        return output;
    }
};
