class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int>st;
        for(auto it: s){
            st[it]++;
        }
        for(auto it: t){
            st[it]--;
        }
        for(auto it: st){
            if(it.second < 0){
                return it.first;
            }
        }
        return 'e';
    }
};
