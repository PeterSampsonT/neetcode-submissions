class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> S(nums.begin(),nums.end());

        int max=0;
        for(int i=0;i<nums.size();i++)
        {
            const auto& z=S.find(nums[i]-1);
            if(z==S.end())
            {
                int l=1;
                int n=nums[i];
                while(S.find(n+1)!=S.end())
                {
                    l++;
                    n++;
                }
                if(max<l)
                max=l;
            }
        }
        return max;
    }
};
