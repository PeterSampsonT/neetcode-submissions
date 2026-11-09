class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        std::vector<std::pair<int,int>> car;
        car.reserve(position.size());
        
        for(int i=0;i<speed.size();i++)
        {
            car.push_back({position[i],speed[i]});
        }

        std::sort(car.begin(),car.end(),[](const auto& a,const auto& b){return a.first>b.first;});

        int f=1;
        auto curr=car[0];

        for(int i=1;i<position.size();i++)
        {
            if((target-curr.first)/((double)curr.second) < (target-car[i].first)/((double)car[i].second))
            {
                f++;
                curr=car[i];
            }
        }
        return f;
    }
};
