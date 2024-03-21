class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>numsMap;
        vector<int>answer;
        for(auto it:nums){
            numsMap[it]++;
        }
       priority_queue<pair<int, int>> pq;
       for(auto it = numsMap.begin(); it != numsMap.end(); it++){
        pq.push(make_pair(it -> second, it -> first));
        if(pq.size() > (int)numsMap.size() - k){
            answer.push_back(pq.top().second);
            pq.pop();
        }
       }
        return answer;
    }
};
