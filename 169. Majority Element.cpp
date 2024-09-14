class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>ans;
        int n = nums.size();
        for(int num: nums){
            ans[num]++;
            if(ans[num] > (n/2)) return num;
        }
        return 1;
    }
};
