class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ans = 0;
        int element_sum = 0;
        int digit_sum = 0;
        for(int i = 0; i < nums.size(); i++){
            element_sum += nums[i];
            int num = nums[i];
            if(num > 9){
               while(num > 9){
                    int rem = num%10;
                    cout << rem << endl;
                    digit_sum += rem;
                    num = num/10;
               }
               digit_sum += num;
            }else {
                 digit_sum += num;
            }

        }
        ans = abs(element_sum - digit_sum);
        return ans;
    }
};
