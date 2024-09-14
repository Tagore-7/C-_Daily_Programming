class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int> map1;
        map<char, int> map2;
        for(auto it: word1){
            map1[it]++;
        }
        for(auto it: word2){
            map2[it]++;
        }
        if(map1.size() != map2.size()){
            return false;
        }
         vector<int> count1, count2;
        for(auto it: map1){
            if(map2.find(it.first) == map2.end()){
                return false;
            }
            count1.push_back(it.second);
        }
       
        
        for(auto it:map2){
            count2.push_back(it.second);
        }

        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        return count1 == count2;
    }
};
