class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>>maxHeap;
        int n = arr.size();
        for(int i =0; i < n; i++){
            for(int j = 1; j < n; j++){
                maxHeap.push({((double)arr[i] / arr[j]),{arr[i],arr[j]}});

                if(maxHeap.size()>k){
                    maxHeap.pop();
                }
            }
        }
        auto res = maxHeap.top().second;
        return {res.first, res.second};
    }
};
