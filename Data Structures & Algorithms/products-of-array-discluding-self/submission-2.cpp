class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int z=0;
        int zi=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zi=i;
                z++;
            }
            else
            product*=nums[i];
        }

        std::vector<int> out(nums.size(),0);

        if(z>1)
        return out;
        
        if(z==1)
        {
            out[zi]=product;
            return out;
        }        


        for(int i=0;i<nums.size();i++)
        out[i]=product/nums[i];

        return out;
    }
};
