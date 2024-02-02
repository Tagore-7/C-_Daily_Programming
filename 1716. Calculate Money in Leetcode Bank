class Solution {
public:
    int totalMoney(int n) {
        int money = 0, amount = 1;
        while(n > 0){
            for( int i = 0; i < 7 && n-- > 0; i++){
                money += i + amount;
            }
            amount++;
        }
        return money;
    }
};
