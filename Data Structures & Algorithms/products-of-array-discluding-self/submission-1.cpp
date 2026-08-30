class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int z=0;
        for(const int& n:nums)
        {
            if(n==0)
            z++;

            product*=n;
        }
        if(z==1)
        {
            product=1;
            for(const int& n:nums)
            {                
                if(n!=0)
                product*=n;
            }
        }        

        std::vector<int> out(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            if(z==1)
            {
                if(nums[i]!=0)
                out[i]=0;
                else
                out[i]=product;
            }
            else
            {
                if(nums[i]!=0)
                out[i]=product/nums[i];
                else
                out[i]=0;
            }
        }
        return out;
    }
};
