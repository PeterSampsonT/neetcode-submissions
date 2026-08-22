class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> freq;
        for(const int& num :nums)
        {
            if(freq.contains(num))
            return true;
            freq.insert(num);
        }
        return false;
    }
};