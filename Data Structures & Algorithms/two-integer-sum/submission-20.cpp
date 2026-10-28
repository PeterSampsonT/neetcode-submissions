class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> S;
        S.reserve(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            if(S.contains(target-nums[i]))
            return {S[target-nums[i]],i};
            S[nums[i]]=i;
        }
    }
};
