class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        ans.reserve(2*n);
        int *p = &nums[0];
        int *q = &nums[n];
        for(int i = 0; i < nums.size()/2; i++){
            ans.push_back(*p++);
            ans.push_back(*q++);
            cout << ans[i];
        }
        return ans;
    }
};
