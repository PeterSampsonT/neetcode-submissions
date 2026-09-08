class Solution {
public:
    int trap(vector<int>& height) {
        std::vector<int> pref(height.size(),0);
        std::vector<int> suf(height.size(),0);

        pref[height.size()-1]=height[height.size()-1];
        for(int i=height.size()-2;i>=0;i--)
        {
            if(height[i]>pref[i+1])
            pref[i]=height[i];
            else
            pref[i]=pref[i+1];
        }

        suf[0]=height[0];
        for(int i=1;i<height.size();i++)
        {
            if(height[i]>suf[i-1])
            suf[i]=height[i];
            else
            suf[i]=suf[i-1];
        }
        int w=0;
        for(int i=0;i<height.size();i++)
        {
            w+=min(suf[i],pref[i])-height[i];
        }
        return w;
    }
};
