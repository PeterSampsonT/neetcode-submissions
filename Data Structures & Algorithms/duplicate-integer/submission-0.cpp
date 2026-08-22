class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> freq;
        for(int i = 0;i<nums.size();i++)
        {
            if(freq.contains(nums[i]))
            return true;
            else
            freq[nums[i]]=1;
        }
        return false;
    }
};