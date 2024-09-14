class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                //cout << i << " "<< j <<endl;
                if( nums[j] < nums[i]){
                    cout << i << " "<< j <<endl;
                    count++;
                }
            }
            cout << count << endl;
        }
        return ans;
    }
};
