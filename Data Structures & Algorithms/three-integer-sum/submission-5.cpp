class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::vector<int> sorted=nums;
        std::sort(sorted.begin(),sorted.end());

        std::vector<std::vector<int>> out;

        for(int i=0;i<sorted.size();i++)
        {
            if(i>0 && sorted[i]==sorted[i-1]) continue;
            int j=i+1;
            int k=sorted.size()-1;
            while(j<k)
            {
                int x=sorted[j]+sorted[k];
                if((-sorted[i])==x)
                {
                    out.push_back({sorted[i],sorted[j],sorted[k]});
                    k--;
                    j++;
                    while (j < k && sorted[j] == sorted[j - 1]) j++;
                    while (j < k && sorted[k] == sorted[k + 1]) k--;
                }
                else if((-sorted[i])<x)
                {
                    k--;
                }
                else
                {
                    j++;
                }
            }
        }
        return out;
    }
};
