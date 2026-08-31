class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        std::vector<int> pre(nums.size(),1);
        std::vector<int> out(nums.size(),1);
        for(int i=1;i<nums.size();i++)
        {
            pre[i]*=pre[i-1]*nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            out[i]*=out[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            out[i]*=pre[i];
        }
        return out;
    }
};
