/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int result = 0;
    pair<int, int> dfs(TreeNode *root){
        if(!root){
            return {0,0};
        }
        
        pair<int, int> left = dfs(root -> left);
        pair<int, int>right = dfs(root -> right);
        
        int left_size = left.first;
        int left_coins = left.second;
        int right_size = right.first;
        int right_coins = right.second;

        
        int size = 1 + left_size + right_size;
        int coins = root -> val + left_coins + right_coins;
        result += abs(size - coins); 
        return {size, coins};
    }
public:
    int distributeCoins(TreeNode* root) {
         dfs(root);
         return result;
    }
};
