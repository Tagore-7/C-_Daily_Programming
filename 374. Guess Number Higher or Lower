/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left = 1, right = n;
        int mid =0;
        while(right >= left){
            mid = left + (right - left) / 2;
            if(guess(mid) == -1){
                right = mid - 1;
            }else if(guess(mid) == 1){
                left = left + 1;
            }else{
                break;
            }
        }
        return mid;
    }
};
