class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(auto it: nums){
            string num = to_string(it);
            if(num.size() % 2 == 0) count++;
        }
        return count;
    }
};
