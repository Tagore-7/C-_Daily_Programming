class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int, int> numCount;
        for(auto it:nums){
            numCount[it]++;
        }
        int count1 = 0;
        int count2 = 0;
        for(auto it: numCount){
            if(it.second > 1){
                count1 += it.second/2;
            }
            if(it.second % 2 != 0){
                count2++;
            }

        }
        return {count1, count2};

    }
};
