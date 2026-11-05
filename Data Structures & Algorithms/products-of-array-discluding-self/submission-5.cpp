class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> out(nums.size(),1);
        
        int j=1;

        for(int i=0;i<nums.size();i++)
        {
            out[i]*=j;
            j*=nums[i];
        }

        j=1;

        for(int i=nums.size()-1;i>=0;i--)
        {
            out[i]*=j;
            j*=nums[i];
        }

        return out;
    }
};
