/* My first thought process */
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, vector<int>>numMap;
        for(int i =0; i < nums.size(); i++){
            numMap[nums[i]].push_back(i);
        }
        vector<int>indices;
        for(auto it:numMap){
            for(auto index:it.second){
                indices.push_back(index);
            }
            
        }
        for(int i =0; i < indices.size(); i++){
            for(int j = i + 1; j < indices.size(); j++){
                if(nums[indices[i]] == nums[indices[j]] && abs(indices[i] - indices[j]) <= k){
                    return true;
                }
            }
        }
        return false;
    }
};



/* final solution */

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int>numMap;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(numMap.count(nums[i])){
                if(abs(i - numMap[nums[i]]) <= k){
                    return true;
                }
            }
            numMap[nums[i]] = i ;
        }
        return false;
    }
};
