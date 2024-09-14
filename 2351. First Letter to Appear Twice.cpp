class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int>nums;
        char ans;
        for(auto it: s){
            if(nums.find(it) != nums.end()){
                ans = it;
                break;
            }
            nums[it]++;
        }
        return ans;
    }
};
