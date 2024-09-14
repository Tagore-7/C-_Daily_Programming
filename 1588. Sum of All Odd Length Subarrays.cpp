class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        int length = arr.size();
        for(int i = 0; i < length; i++){
            ans += (((i+1)*(length-i) + 1) / 2 ) * arr[i];
        } 
       return ans;
    }
};
