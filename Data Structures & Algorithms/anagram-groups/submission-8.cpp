class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::vector<std::vector<std::string>> out;
        std::unordered_map<std::string,int> M;
        int k=0;

        for(int i =0;i<strs.size();i++)
        {
            std::string sorted=strs[i];
            std::sort(sorted.begin(), sorted.end());
            if(M.contains(sorted))
            {
                out[M[sorted]].push_back(strs[i]);
            }
            else
            {
                M[sorted]=k;
                k++;
                out.push_back({strs[i]});
            }
        }
        return out;
    }
};
