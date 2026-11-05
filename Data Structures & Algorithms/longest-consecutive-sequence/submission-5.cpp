class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> S(nums.begin(),nums.end());
        
        int MAX=0;

        int l;
        for(const int& num:S)
        {
            if(!S.count(num-1))
            {
                l=1;
                while(S.count(num+l))
                {
                    l++;
                }
                MAX=std::max(l,MAX);
            }
        }
        return MAX;
    }
};
