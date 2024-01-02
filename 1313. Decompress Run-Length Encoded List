class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        
        for(int i = 0; i < nums.size()/2; i++){
        int freq = nums[2*i];
        int val = nums[2*i+1];
        while(freq){
            ans.push_back(val);
            freq--;
        }
        }
        return ans;
    }
};
