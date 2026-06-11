class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;

        for(int i=0; i<position.size(); i++){
            double val = (double)(target - position[i])/speed[i];
            cars.push_back({position[i], val});
        }

        sort(cars.rbegin(), cars.rend());
        int fleet = 0;
        double prevCarFleet = 0;
        for(auto it: cars){
            if(it.second > prevCarFleet) {
                fleet++;
                prevCarFleet = it.second;
            }
        }
        return fleet;
    }
};
