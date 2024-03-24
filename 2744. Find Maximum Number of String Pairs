class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        map<string, int>wordMap;
        for(auto word: words){
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            wordMap[sorted]++;
        }
        int count = 0;
        for(auto it: wordMap){
            int occur = it.second;
            count += occur * (occur - 1) / 2;
        }
        
        return count;
    }
};
