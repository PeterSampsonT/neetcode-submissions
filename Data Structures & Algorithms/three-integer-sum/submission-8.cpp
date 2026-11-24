class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<int> sorted=nums;
        std::sort(sorted.begin(),sorted.end());

        std::vector<std::vector<int>> out;
        
        for(int i=0;i<nums.size()-2;++i)
        {
            while(i && i<nums.size() && sorted[i]==sorted[i-1])
            {
                i++;
            }

            int j=i+1;
            int k=nums.size()-1;
            int sum;

            while(j<k)
            {
                sum=sorted[i]+sorted[j]+sorted[k];
                if(!sum)
                {
                    out.push_back({sorted[i],sorted[j],sorted[k]});
                    j++;
                    k--;
                    while (j < k && sorted[j] == sorted[j - 1]) j++;
                    while (j < k && k+1<nums.size() && sorted[k] == sorted[k + 1]) k--;
                }
                else if(sum<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return out;
    }
};
