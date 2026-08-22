class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int>a={-1,-1};
        std::unordered_map<int,int> seen;
        for(int i=0;i<nums.size();i++)
        {
            if(seen.contains(target-nums[i]))
            {
                a={seen[target-nums[i]],i};
                return a;
            }
            seen[nums[i]]=i;
        }
        return a;
    }
};
