class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<std::string,std::vector<std::string>> GA;
        GA.reserve(strs.size());

        for(const std::string& str : strs)
        {
            std::string sorted=str;
            std::sort(sorted.begin(),sorted.end());

            GA[sorted].push_back(str);
        }

        std::vector<std::vector<std::string>> out;
        out.reserve(strs.size());

        for(auto& [k,v] : GA)
        {
            out.push_back(std::move(v));
        }
        return out;
    }
};
