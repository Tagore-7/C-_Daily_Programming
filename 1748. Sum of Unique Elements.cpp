class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int>numsMap;
        int sumUnique = 0;
        for(auto it: nums){
            numsMap[it]++;
        }
        for(auto it: numsMap){
            if( it.second == 1){
            sumUnique += it.first;
            }
        }
        return sumUnique;
    }
};
