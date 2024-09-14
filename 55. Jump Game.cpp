class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        if(nums.size() == 1)return true;
        for(int i = 0; i < nums.size(); i++){
            maxReach = max(maxReach, i + nums[i]);
            if(maxReach < i + 1){
                return false;
            }
            if(maxReach >= nums.size() - 1){
                return true;
            }
        }
        return false;
    }
};
