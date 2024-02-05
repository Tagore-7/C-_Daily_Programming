class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i = 0; i < n; i = i+3){
            if(i+2 < n){
                if( nums[i + 2] - nums[i] <= k){
                    ans.push_back({nums[i],nums[i+1],nums[i+2]});
                }else{
                    return {};
                }
            }else{
                vector<int>result;
                for(int j = i; j < n ; i++ ){
                    result.push_back(nums[j]);
                }
                ans.push_back(result);
            }
        }
        return ans;
    }
};
