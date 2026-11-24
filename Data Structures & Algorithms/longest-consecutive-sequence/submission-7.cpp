class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> S(nums.begin(),nums.end());

        int MAX=0;
        int curr=0;
        for(const int& num : nums)
        {
            if(!S.contains(num-1))
            {
                curr=1;
                while(S.contains(num+curr))
                {
                    ++curr;
                }
                MAX=std::max(MAX,curr);
            }
        }
        return MAX;
    }
};
