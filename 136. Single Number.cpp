class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> num;
        for(auto it: nums){
            num[it]++;
        }
        for(auto it: num){
            if(it.second == 1) return it.first;
        }
        return 0;
    }
};
