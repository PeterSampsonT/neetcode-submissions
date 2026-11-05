class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<std::string>> GA;
        GA.reserve(strs.size());
        std::vector<std::string> sorted=strs;
        
        for(int i=0;i<strs.size();i++)
        {
            std::sort(sorted[i].begin(),sorted[i].end());
            GA[sorted[i]].push_back(strs[i]);
        }

        std::vector<std::vector<std::string>> out;
        out.reserve(GA.size());

         for (auto& pair : GA) {
            out.push_back(std::move(pair.second));
        }
        

        return out;
    }
};
