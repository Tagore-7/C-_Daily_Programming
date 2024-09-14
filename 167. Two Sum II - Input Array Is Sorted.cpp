class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>solution;
        int i = 0, j = numbers.size() -1 ;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                solution.push_back(i + 1);
                solution.push_back(j + 1);
               return solution;
            }else if(numbers[i] + numbers[j] > target) {
                j--;
            }else{
                i ++;
            }
        }
        return solution;
    }
};
