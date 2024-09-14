class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>ans;
        int leftsum = 0;
        int rightsum = 0;
        int diff = 0;
        for(int i = 0; i < nums.size();i++){
            for( int j = 0; j < i ; j++){
               leftsum += nums[j];
            }
            for(int k = i+1 ; k < nums.size(); k++){
                rightsum += nums[k];
            }
           diff = abs(leftsum - rightsum);
           ans.push_back(diff);
           leftsum = 0;
           rightsum = 0;
        }
        return ans;
    }
};
