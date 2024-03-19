class Solution {
public:
    int countPoints(string rings) {
        int count = 0;
        unordered_map<int, vector<char>>ringsMap;
        for(int i = 0; i < rings.size() - 1; i++){
            ringsMap[rings[i + 1]].push_back(rings[i]);
        }
        for(auto it: ringsMap){
              vector<char> ans =  it.second;
              bool hasGreen = false, hasRed = false, hasBlue = false;
              for(auto it: ans){
                 if(it == 'R') hasRed = true;
                 else if(it == 'G') hasGreen = true;
                 else if(it == 'B') hasBlue = true;
              }

              if(hasRed && hasGreen && hasBlue) count++;
        }
        return count;
    }
};
