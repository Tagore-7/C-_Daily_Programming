class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int, string> keyboard = {
        {2, "abc"},
        {3, "def"},
        {4, "ghi"},
        {5, "jkl"},
        {6, "mno"},
        {7, "pqrs"},
        {8, "tuv"},
        {9, "wxyz"}
        };
        vector<string>alphabets;
        for(auto it: digits){
            int key = it - '0';
            if(keyboard.find(key) != keyboard.end()){
                alphabets.push_back(keyboard[key]);
            }
        }
        vector<string>solution;
        if(alphabets.empty()){
            return solution;
        }
       generateCombinations(alphabets, 0, "", solution);
        return solution;
    }

    void generateCombinations(vector<string>&alphabtes, int index, 
    string current, vector<string>&solution){
        if(index == alphabtes.size()){
            solution.push_back(current);
            return;
        }

        for(char ch: alphabtes[index]){
            generateCombinations(alphabtes, index + 1, current + ch, solution);
        }
    }
};
