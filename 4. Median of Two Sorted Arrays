class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto i: nums1) ans.push_back(i);
        for(auto j: nums2) ans.push_back(j);
        sort(ans.begin(),ans.end());
        auto n = ans.size();
        if( n % 2 != 0) {
            return ans[(n/2) ];
        }else{
            return (ans[(n/2 - 1)] + ans[n /2]) / 2.0;
        }
        return 0;
    }
};
