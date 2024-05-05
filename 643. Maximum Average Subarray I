class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int end_pointer = k;
        int sum = 0;
        int highest_sum = 0;
        for(int i =0; i < end_pointer; i++){
            sum += nums[i];
        }
        highest_sum = sum;
        while(end_pointer < nums.size()){
            sum -= nums[end_pointer - k];
            sum += nums[end_pointer];
            if(sum > highest_sum){
                highest_sum = sum;
            }
            end_pointer++;
        }
        return double(highest_sum) / k;
    }
};
