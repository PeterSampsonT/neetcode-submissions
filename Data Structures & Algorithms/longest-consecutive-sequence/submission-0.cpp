class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> s(nums.begin(),nums.end());
        int max=0;
        for(const int& n:s)
        {
            int count=1;
            if(!s.contains(n-1))
            {
                while(s.contains(n+count))
                {
                    count++;
                }
                if(count>max)
                max=count;
            }
        }
        return max;
    }
};
