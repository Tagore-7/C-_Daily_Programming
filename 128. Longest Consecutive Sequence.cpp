class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numSet;
        for(int num: nums){
            numSet.insert(num);
        }
        int longestConsecutiveSequence = 0;
        for(int num: nums){
            if(numSet.find(num - 1) == numSet.end()){
                int currentNumber = num;
                int currentConsecutiveSequence = 1;
                while(numSet.find(currentNumber + 1) != numSet.end()){
                    currentNumber++;
                    currentConsecutiveSequence++;
                }
                longestConsecutiveSequence =  max(longestConsecutiveSequence, currentConsecutiveSequence);
            } 
        }
        return longestConsecutiveSequence;
    }
};
