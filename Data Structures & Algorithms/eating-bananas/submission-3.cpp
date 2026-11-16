class Solution {
public:
    bool can_finish(vector<int>& piles,int h,int k)
    {
        int curr=0;
       for(const int& num : piles)
       {
            curr+=((num+k-1)/k);
            if(curr>h)
            return false;
       }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*std::max_element(piles.begin(),piles.end());

        while(i<j)
        {
            int mid=(i+j)/2;
            if(can_finish(piles,h,mid))
            {
                j=mid;
            }
            else
            {
                i=mid+1;
            }
        }

        return j;
    }
};
