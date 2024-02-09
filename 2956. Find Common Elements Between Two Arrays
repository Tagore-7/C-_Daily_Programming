class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> num1; unordered_map<int, int> num2;
        int count1 = 0, count2 = 0;
        for(auto num: nums1){
            num1[num]++;
        }
         for(auto num: nums2){
            num2[num]++;
        }
        for( auto it: nums1){
            if(num2[it] > 0){
                count1++;
            }
        }
        for( auto it: nums2){
            if(num1[it] > 0){
                count2++;
            }
        }


    return {count1, count2};
    }
};
