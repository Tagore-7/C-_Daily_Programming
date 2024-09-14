class Solution {
public:
    int maximum69Number (int num) {
        int ans = 0; vector<int> nums;
        while( num > 0){
            int rem = num % 10;
            nums.push_back(rem);
            num  = num / 10;
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] == 6){
              nums[i] = 9;
              break;
            }
        }
        for(int i = nums.size() - 1; i >= 0; i--){
            ans = ans * 10 +  nums[i];
        }

        return ans;
    }
};
