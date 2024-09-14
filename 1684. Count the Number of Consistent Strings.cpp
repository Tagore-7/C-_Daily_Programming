class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int> map;
        int ans = words.size();
        for(char c: allowed){
            map[c]++;
        }
        for(auto i:words){
            for(auto c: i){
                if( map[c] == 0){
                    ans--;
                    break;
                }
            }
        }
        return ans;

    }
};
