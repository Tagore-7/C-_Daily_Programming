class Solution {
public:
    string reverseVowels(string s) {
        int first = 0;
        int second = s.size() - 1;
        while(first < second){
            if(!isVowel(s[first])){
                first++;
                continue;
            }
            if(!isVowel(s[second])){
                second--;
                continue;
            }
            swap(s[first], s[second]);
            first++;
            second--;
        }
        
        return s;
    }

    bool isVowel(char c){
        return (c=='a' || c=='A' || c=='e' ||
            c=='E' || c=='i' || c=='I' ||
            c=='o' || c=='O' || c=='u' ||
            c=='U');
    }
};
