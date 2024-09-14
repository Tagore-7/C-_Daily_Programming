class Solution {
private:
    int dfs(vector<int> &nums, int index, int total){
        if(index == nums.size()){
            return total;
        }

        int include = dfs(nums, index + 1, total ^ nums[index]);
        int exclude = dfs(nums, index + 1, total);
        return include + exclude;
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
};
