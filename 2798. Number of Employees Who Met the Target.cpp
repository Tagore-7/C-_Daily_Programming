class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans = 0;
        for(auto i : hours){
            if(i >= target){
              ans += 1;
            }
        }
        return ans;
    }
};
