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
    vector<int>nums;
public:
    void nodes(TreeNode *root){
        if(root){
            nodes(root -> left);
            nums.push_back(root -> val);
            nodes(root -> right);
        } 
    }
    int getMinimumDifference(TreeNode* root) {
        nodes(root);
        int diff = INT_MAX;
        for(int i = 1; i < nums.size(); i++){
            diff = min(diff, nums[i] - nums[i -1]);
        }
        return diff;
    }
};
