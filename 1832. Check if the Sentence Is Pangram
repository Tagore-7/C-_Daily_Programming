class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char, int> pangram;
        for(int i = 0; i < sentence.size(); i++){
            pangram[sentence[i]]++;
        }
        if(pangram.size() == 26) return true;
        return false;
    }
};
