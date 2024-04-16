class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = -1, sum = 0, minLength = nums.size() + 1;
        while(left < nums.size()){
            if(right + 1 < nums.size() && sum < target){
                sum += nums[++right];
            }else{
                sum -= nums[left++];
            }
            if( sum >= target){
                minLength = min(minLength, right - left + 1);
            }
        }
        return minLength == nums.size() + 1 ? 0: minLength;
    }
};
