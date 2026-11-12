class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::array<int,2001> H{};

        for(const int& num : nums)
        {
            H[num+1000]++;
        }

        std::vector<std::vector<int>> buckets(nums.size()+1);

        for(int i=0;i<2001;++i)
        {
            if(H[i])
            buckets[H[i]].push_back(i-1000);
        }

        std::vector<int> out;
        out.reserve(k);

        for(int i=nums.size();i>=0;i--)
        {
            for(const int& num : buckets[i])
            {
                k--;
                out.push_back(num);
                if(!k)
                return out;
            }
        }
        return out;      
    }
};
