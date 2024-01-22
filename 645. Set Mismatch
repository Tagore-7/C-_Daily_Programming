class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int>numSet(nums.size());
        for(int i =1; i <= nums.size(); i++){
            numSet[i]++;
        
        }
        for(auto it: nums){
            numSet[it]--;
        }
        int duplicate = 0, missing = 0;
        for( auto it: numSet){
            if(it.second == -1) duplicate = it.first;
            if(it.second == 1)  missing = it.first;
        }
        return {duplicate, missing};
    }
};
