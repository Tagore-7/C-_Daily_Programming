class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int ans = 0;;
        int n = nums.size();
        for( int i = 0; i < n ; i++){
            for(int j = 1; j < n  ; j++){
                if( (0 <= i && i < j && i < n ) && nums[i] == nums[j] && ((i * j) % k == 0)){
                    ans += 1;
                }
            }
        }
        return ans;
    }
};
