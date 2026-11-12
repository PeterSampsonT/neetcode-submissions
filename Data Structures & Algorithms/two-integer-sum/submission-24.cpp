class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> M;
        M.reserve(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            if(M.count(target-nums[i]))
            return {M[target-nums[i]],i};

            M[nums[i]]=i;
        } 
    }
};
