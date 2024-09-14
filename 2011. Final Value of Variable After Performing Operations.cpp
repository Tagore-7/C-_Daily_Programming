class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int X = 0;string s1 = "X++";string s2 = "++X";
       
       for( string x : operations){
           x == s1 || x == s2 ? X++ : X--;
       }
       return X;
    }
};
