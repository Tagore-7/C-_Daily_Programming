class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int>numsMap;
        for(auto it: nums){
            numsMap[it]++;
        }
        for(auto it: numsMap){
            if(it.second > 1) return true;
        }
        return false;
    }
};
