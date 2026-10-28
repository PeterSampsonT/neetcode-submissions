class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int freq[2001]={0};

        for(int i=0;i<nums.size();i++)
        {
            freq[1000+nums[i]]++;
        }

        std::vector<std::vector<int>> buckets(nums.size()+1);

        for(int i=0;i<2001;i++)
        {
            if (freq[i]>0)
            {
                buckets[freq[i]].push_back(i-1000);
            }
        }
        
        std::vector<int> out;
        out.reserve(k);

        for(int i=nums.size();k>0;i--)
        {
            for(auto& num : buckets[i])
            {
                k--;
                out.push_back(num);
            }
        }
        return out;
    }
};
