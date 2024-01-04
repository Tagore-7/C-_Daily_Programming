class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int max_width = 0;
        vector<int> x;
        for(int i = 0; i < points.size();i++){
            int j = 0;
            auto k = points[i][j];
            x.push_back(k);
          
        }
        sort(x.begin(),x.end());
        for(int l = 0; l < x.size()-1 ; l++){
            max_width = max(max_width, x[l+1]-x[l]);
        }
        return max_width;
    }
};
