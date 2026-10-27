class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0)
        return false;

       std::unordered_set<int> S;

       for(const int& num:nums)
       {
            if(S.count(num))
            return true;

            S.insert(num);
       }
       return false;
    }
};