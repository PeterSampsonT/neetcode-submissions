class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::string>sorted = strs;

        for(std::string& str:sorted)
        {
            std::sort(str.begin(),str.end());
        }

        std::vector<vector<std::string>> output;
        std::unordered_map<std::string,int> map;
        int k=0;

        for(int i=0;i<strs.size();i++)
        {
            auto bucket=map.find(sorted[i]);
            
            if(bucket==map.end())
            {
                map[sorted[i]]=k;
                output.push_back({strs[i]});
                k++;
            }
            else
            {
                output[bucket->second].push_back(strs[i]);
            }
        }
        return output;
    }
};
