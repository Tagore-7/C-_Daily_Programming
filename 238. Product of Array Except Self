class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>solution(nums.size(), 0);
        int zeros = 0;
        int product = 1;
        for(auto num: nums){
            if(num == 0){
                zeros++;
                continue;
            }
            product *= num;
        }

        if(zeros == 1){
            for(int i = 0; i < nums.size(); i++){
                solution[i] = nums[i] == 0? product : 0;
            }
        }else if(zeros == 0){
            for(int i = 0; i < nums.size(); i++){
                solution[i] = product / nums[i];
            }
        }
        return solution;
    }
};
