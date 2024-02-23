class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trust_count(n+1,0);
        for(const auto &edge: trust){
            int a = edge[0];
            int b = edge[1];
            trust_count[a]--;
            trust_count[b]++;
        }
        for(int i = 0; i <= n; i++){
            if(trust_count[i] == n-1) return i;
        }
        return -1;
    }
};
