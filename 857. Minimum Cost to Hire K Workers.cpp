class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        double minMoney = DBL_MAX;
        int qualitySum = 0;
        vector<pair<double, int>>wagePerQuality;
        priority_queue<int>qualityMaxHeap;
        for(int i = 0; i < quality.size(); i++){
            wagePerQuality.emplace_back((double)wage[i] / quality[i],quality[i]);
        }
        sort(wagePerQuality.begin(), wagePerQuality.end());
        for(const auto&  [wagePerQualityRatio, q]: wagePerQuality){
            qualityMaxHeap.push(q);
            qualitySum += q;
            if(qualityMaxHeap.size() > k){
                qualitySum -= qualityMaxHeap.top();
                qualityMaxHeap.pop();
            }
            if(qualityMaxHeap.size() == k){
                minMoney = min(minMoney, qualitySum * wagePerQualityRatio);
            }
        }
        return minMoney;

    }
};
