class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile = *max_element(piles.begin(), piles.end());
        int min_pile = 1;
        int answer = max_pile;
        while(min_pile < max_pile){
            int mid_pile = min_pile + (max_pile - min_pile) / 2;
            int hours = 0;
            for(auto it:  piles){
                hours += ceil(double(it) / mid_pile);
            }
            if(hours > h){
                min_pile = mid_pile + 1;
            }else{
                answer = min(answer, mid_pile);
                 max_pile = mid_pile ;
            }
        }
        return answer;
    }
};
