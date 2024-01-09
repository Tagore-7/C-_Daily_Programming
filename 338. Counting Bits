class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.reserve(n+1);
        for(int i = 0; i <= n; i++){
            int j  = __builtin_popcount(i);
            ans.push_back(j);
        }
        return ans;
    }
};
