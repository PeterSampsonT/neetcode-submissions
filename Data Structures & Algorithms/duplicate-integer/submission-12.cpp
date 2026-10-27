class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

       std::unordered_set<int> S;
       S.reserve(nums.size());

       for(const int& num:nums)
       {
            if(S.count(num))
            return true;

            S.insert(num);
       }
       return false;
    }
};