class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int, int> nums;
        vector<int>allNums;
        vector<int>ans;
        int count = 0;
        for(auto it: grid){
            for(auto itt: it){
                nums[itt]++;
                count++;
                allNums.push_back(itt);
            }
        }
        for(auto it: nums){
            if(it.second > 1) {
                ans.push_back(it.first);
            }
        }
        sort(allNums.begin(),allNums.end());
        vector<int>dups;
        for(int i = 1; i <= count ; i++){
            dups.push_back(i);
        }
        for(auto it: dups){
            if(find(allNums.begin(),allNums.end(),it) == allNums.end()){
                ans.push_back(it);
            }
        }
        return ans;

    }
};
