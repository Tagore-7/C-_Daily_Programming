class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(), happiness.end(), greater<int>());
        long long maxHappiness = 0;
        int turns = 0;

            for(int i = 0; i < k; i++){
                maxHappiness += max(happiness[i] - turns, 0); 
                turns++;
            }

            return maxHappiness;
    }
};
