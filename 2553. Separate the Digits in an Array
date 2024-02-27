class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(auto it: nums){
           string temp1 = to_string(it);
            for(char temp2: temp1){
                int temp3 = temp2 - '0';
                ans.push_back(temp3);
            }
        }
        return ans;
    }
};
