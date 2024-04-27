class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>ast;
        vector<int>ans;
        for(int i = 0; i < asteroids.size(); i++){
            int cur = asteroids[i];
            if(cur > 0 || ast.empty()){
                ast.push(cur);
            }else{
                while(!ast.empty() && ast.top() >0 && ast.top() < abs(cur)){
                    ast.pop();
                }
                if(ast.empty() || ast.top() < 0){
                    ast.push(cur);
                }else if(ast.top() == abs(cur)){
                    ast.pop();
                }
            }
        }
         while(!ast.empty()){
            ans.push_back(ast.top());
            ast.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
