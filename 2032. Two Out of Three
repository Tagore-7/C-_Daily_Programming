class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_map<int, int> totalNum;
        vector<int> num;
       sort(nums1.begin(),nums1.end()); 
       sort(nums2.begin(),nums2.end());
       sort(nums3.begin(),nums3.end());
       nums1.erase(unique(nums1.begin(),nums1.end()), nums1.end());
       nums2.erase(unique(nums2.begin(),nums2.end()), nums2.end());
       nums3.erase(unique(nums3.begin(),nums3.end()), nums3.end());
       for(auto it: nums1) totalNum[it]++;
       for(auto it: nums2) totalNum[it]++;
       for(auto it: nums3) totalNum[it]++;
       for(auto it: totalNum){
       if(it.second >= 2) num.push_back(it.first);
       }
       return num;
    }
};
