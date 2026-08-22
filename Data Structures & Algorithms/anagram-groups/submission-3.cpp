class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::vector<std::string> sorted=strs;
        for(std::string& s:sorted)
        {
            std::sort(s.begin(),s.end());
        }

        std::vector<std::vector<std::string>> output;
        std::unordered_map<std::string,int> map;
        int k=0;

        for(int i=0;i<strs.size();i++)
        {
            auto e=map.find(sorted[i]);

            if(e==map.end())
            {                
                output.push_back({strs[i]});
                map[sorted[i]]=k;
                k++;
            }
            else
            {
                output[map[sorted[i]]].push_back(strs[i]);
            }
        }
        return output;
    }

};
