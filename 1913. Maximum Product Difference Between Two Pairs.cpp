class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxFirstNumber = nums[nums.size() -1 ];
        int maxSecondNumber = nums[nums.size() - 2];
        int firstLowestNumber = nums[0];
        int secondLowestNumber = nums[1];
        return (( maxFirstNumber * maxSecondNumber) - (secondLowestNumber * firstLowestNumber));
    }
};
