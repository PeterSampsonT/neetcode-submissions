class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> seen;
        seen.reserve(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            auto e=seen.find(target-nums[i]);
            if(e!=seen.end())
            return {e->second,i};
            seen[nums[i]]=i;            
        }
    }
};
