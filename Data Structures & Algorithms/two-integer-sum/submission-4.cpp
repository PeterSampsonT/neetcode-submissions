class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++)
        {
            auto ans=seen.find(target-nums[i]);
            if(ans!=seen.end())
            return {ans->second,i};
            seen[nums[i]]=i;
        }
        return {-1,-1};
    }
};
