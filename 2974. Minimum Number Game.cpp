class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr;
        while(nums.size() != 0){
            auto  min1 = *min_element(nums.begin(),nums.end());
            auto pos1 =  find(nums.begin(),nums.end(),min1);
            nums.erase(pos1);
            auto  min2 = *min_element(nums.begin(),nums.end());
            auto pos2 =  find(nums.begin(),nums.end(),min2);
            nums.erase(pos2);
            arr.push_back(min2);
            arr.push_back(min1);
        }
        return arr;
    }
};
