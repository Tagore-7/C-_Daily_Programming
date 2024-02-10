class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int>len;
        for(auto it: rectangles){
            int min = *min_element(it.begin(),it.end());
            len.push_back(min);
        }
        int max_len = *max_element(len.begin(),len.end());
        int countt = count(len.begin(), len.end(), max_len);
        return countt;
    }
};
