class Solution {
public:
    int findMin(vector<int> &nums) {
        int i=0;
        int j=nums.size()-1;
        int mid;
        while(i<j)
        {
            mid=(i+j)/2;

            if(nums[i]>nums[j])
            {
                if(nums[mid]>nums[j])
                i=mid+1;
                else
                j=mid;
            }
            else 
            {
                if(nums[i]<nums[j])
                j=mid;
                else
                j--;
            }
        }
        return nums[j];
    }
};
