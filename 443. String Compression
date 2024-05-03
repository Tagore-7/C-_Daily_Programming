class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, index = 0; // to track index
        while(i < chars.size()){
            int j = i;
            while(j < chars.size() && chars[i] == chars[j]){
                j++;
            }
            chars[index++] = chars[i];
           if(j - i > 1){
            string count = to_string(j - i);
            for(auto it: count){
                chars[index++] = it;
            }
           }
            i = j;
        }
        return index;

    }
};
