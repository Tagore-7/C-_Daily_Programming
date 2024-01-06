class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string str;
        for(char c : s){
            if( c == '('){
                if(st.size() > 0){
                    str += c;
                }
                st.push(c);
            }
            else{
                if(st.size() > 1){
                    str += c;
                }
                st.pop();
            }
        }
        return str;
    }
};
