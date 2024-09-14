class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score = 0;
        stack<int>scores;
        for(string i:operations){
            if(i == "C"){
                scores.pop();
            }else if( i == "D"){
                scores.push(scores.top() * 2);
            }else if( i == "+"){
                int value1 = 0;
                int value2 = 0;
                value1 = scores.top();
                scores.pop();
                value2 = scores.top();
                scores.push(value1);
                scores.push(value1 + value2);
            }else{
                scores.push(stoi(i));
            }
        }
        while(scores.size() != 0){
            score += scores.top();
            scores.pop();

        }
        return score;
    }
};
