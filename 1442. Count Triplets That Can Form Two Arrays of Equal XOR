class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0, n = arr.size();
        for(int i = 0; i < n ; i++){
            int xorSum = 0;
            for(int j = i ; j < n; j++){
                xorSum ^= arr[j];
                if(xorSum ==0 && j > i){
                    count +=  (j - i); 
                }
            }
        }
        return count;
    }
};
