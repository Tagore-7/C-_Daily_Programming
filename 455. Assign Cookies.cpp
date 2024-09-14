class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        int gptr = 0;
        int sptr = 0;
        while(gptr < g.size() && sptr < s.size()){
            if(g[gptr] <= s[sptr]){
                count++;
                gptr++;
            }
            sptr++;
        }
        return count;
    }
};
