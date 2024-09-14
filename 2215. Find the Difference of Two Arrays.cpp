class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>tempNums1(nums1.begin(), nums1.end());
        set<int>tempNums2(nums2.begin(), nums2.end());
        vector<int> diff1,diff2;
        for(auto it: tempNums1){
            if(tempNums2.find(it) == tempNums2.end()) {
                diff1.push_back(it);
            }
        }
        for(auto it: tempNums2){
            if(tempNums1.find(it) == tempNums1.end()) {
                diff2.push_back(it);
            }
        }
        return {diff1, diff2};
    }
};
