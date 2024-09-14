class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, int> rdkey;
        string finkey ="";
        for(int i = 0; i < key.size(); i++){
            if(rdkey.find(key[i]) == rdkey.end() && isalpha(key[i])){
                finkey.push_back(key[i]);
                rdkey[key[i]]++;
            }
        }
        string alphabets = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char, char> decrypt;
        for(int i = 0; i < finkey.size(); i++){
            decrypt[finkey[i]] = alphabets[i];
        }
        string decryptMessage = "";
        for(int i = 0; i < message.size(); i++){
            auto it = decrypt.find(message[i]);
            if(it != decrypt.end()){
                decryptMessage.push_back(it -> second);
            }else{
                decryptMessage.push_back(message[i]);
            }
        }

        return decryptMessage;
    }
};
