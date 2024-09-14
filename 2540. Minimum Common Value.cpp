class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int>nums;
        set<int>dup(nums1.begin(), nums1.end());
        for(auto it: nums2){
            if(dup.find(it) != dup.end()) {
                nums.insert(it);
            }
        }
        
        if(nums.empty()) return -1;
        return *min_element(nums.begin(),nums.end());
    }
};
