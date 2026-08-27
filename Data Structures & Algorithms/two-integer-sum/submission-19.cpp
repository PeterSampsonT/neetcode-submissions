class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if(nums.size()==2)
        return {0,1};

        std::unordered_map<int,int16_t> seen;
        for(int16_t i=0;i<nums.size();i++)
        {
            auto e=seen.find(target-nums[i]);

            if(e!=seen.end())
            return {e->second,i};

            seen[nums[i]]=i;
        }
        return {-1,-1};
    }
};
