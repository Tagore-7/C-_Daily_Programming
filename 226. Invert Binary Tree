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
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *temp  = NULL; TreeNode *temp2 =  NULL;
        if(root){
        temp  =  root -> right;
        temp2 = root -> left;
        root -> left = temp;
        root -> right = temp2;
        invertTree(root -> left);
        invertTree(root -> right);
        }
        return root;
    }
};
