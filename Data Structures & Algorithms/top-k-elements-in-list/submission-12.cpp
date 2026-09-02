class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> freq;

        for(const int& n : nums)
        {
            freq[n]++;
        }

        std::vector<std::vector<int>> bucket;
        bucket.resize(nums.size()+1);

        for(const auto& [key,value]: freq)
        {
            bucket[value].push_back({key});
        }

        std::vector<int> out;

        for(int i=nums.size();i>=0;i--)
        {
            for(const int& n:bucket[i])
            {
                out.push_back({n});
                k--;
                if(!k)
                return out;
            }
        }
        return out;
    }
};
