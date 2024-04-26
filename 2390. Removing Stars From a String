class Solution {
public:
    string removeStars(string s) {
        stack<int>answer;
        for(auto it: s){
            if(it != '*'){
                answer.push(it);
            }
            else if(it == '*'){
                answer.pop();
            }
            else{

            }
        }
        string word = "";
        while(!answer.empty()){
            word += answer.top();
            answer.pop();
        }
        reverse(word.begin(), word.end());
        return word;
    }
};
