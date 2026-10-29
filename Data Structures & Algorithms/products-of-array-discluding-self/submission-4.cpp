class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int a=1;
        std::vector<int> A;
        A.reserve(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            A[i]=a*nums[i];
            a=A[i];
        }
        a=1;
        std::vector<int> B;
        B.reserve(nums.size());
        for(int i=nums.size()-1;i>=0;i--)
        {
            B[i]=a*nums[i];
            a=B[i];
        }
        std::vector<int> out(nums.size());
        out[0]=B[1];
        for(int i=1;i<nums.size()-1;i++)
        {
            out[i]=A[i-1]*B[i+1];
        }
        out[nums.size()-1]=A[nums.size()-2];
        return out;
    }
};
