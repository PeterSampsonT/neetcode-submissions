class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> S(nums.begin(),nums.end());
        
        int max=0;

        int l;
        for(int i=0;i<nums.size();i++)
        {
            if(!S.count(nums[i]-1))
            {
                l=1;
                while(S.count(nums[i]+l))
                {
                    l++;
                }
                if(max<l)
                max=l;
            }
        }
        return max;
    }
};
