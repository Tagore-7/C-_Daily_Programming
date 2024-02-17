class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        for(int i = 0; i < image.size(); i++){
             vector<int> temp;
            for(int j = image[i].size() - 1; j >=  0; j--){
            int n =  image[i][j];
            if( n ==0 ){
                n = 1;
            }else{
                n = 0;
            }
            temp.push_back(n);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
