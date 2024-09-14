class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = (n * (n+ 1)) / 2;
        int acutalSum =  0;
        for(auto it:nums){
            acutalSum += it;
        }
        return expectedSum - acutalSum;
    }
};
