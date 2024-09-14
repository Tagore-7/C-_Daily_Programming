class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        vector<int>delta; long long result = 0;
        for(auto it:nums){
            delta.push_back((it ^ k) - it);
            result += it;
        }
        sort(delta.rbegin(), delta.rend());
        for(int i = 0; i < nums.size(); i += 2){
            if(i == nums.size() - 1){
                break;
            }
            int path_delta = delta[i] + delta[i + 1];
            if(path_delta <=0){
                break;
            }
            result += path_delta;
        }
        return result;
    }
};
