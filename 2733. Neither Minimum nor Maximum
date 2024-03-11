class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        int maxelement = *max_element(nums.begin(), nums.end());
        int  minelement = *min_element(nums.begin(), nums.end());
        for(auto it:nums){
            if( it != maxelement && it != minelement) return it;
        }
        return -1;
    }
};
