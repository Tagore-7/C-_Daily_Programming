class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>allNums;
        for(int i = 0; i < nums.size(); i++){
            allNums.push(nums[i]);
            if(allNums.size() > k){
                allNums.pop();
            }
        }
        return allNums.top();
    }
};
