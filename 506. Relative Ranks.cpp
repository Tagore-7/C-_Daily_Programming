class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        priority_queue<pair<int, int>>heap;
        for(int i= 0; i < n; i++){
            heap.push({score[i], i});
        }
        vector<string>ranks(n);
        int place = 1;
        while(!heap.empty()){
            int originalIndex = heap.top().second;
            heap.pop();
            if(place == 1){
                ranks[originalIndex] = "Gold Medal";
            }else if(place == 2){
                ranks[originalIndex] = "Silver Medal";
            }else if(place == 3){
                ranks[originalIndex] = "Bronze Medal";
            }else{
                ranks[originalIndex] = to_string(place);
            }
            place++;
        }
        return ranks;

    }
};
