class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        std::unordered_map<int,int> freq;

        for(int n:nums)
        {
            freq[n]++;
        }

        std::vector<std::vector<int>> bucket(nums.size());

        for(const auto& [key,value]:freq)
        {
            bucket[value-1].push_back(key);
        }

        std::vector<int> out;

        for(int i=nums.size()-1;i>=0;i--)
        {
            for(const int& n:bucket[i])
            {
                out.push_back(n);
                k--;
                if(!k)
                return out;
            }
        }

        return out;
    }
};
