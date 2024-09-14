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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( !p && !q ) return true;
        else if( p and q){
            bool a = (p -> val == q -> val);
            bool b = isSameTree(p -> left, q -> left);
            bool c = isSameTree(p -> right, q -> right);
            if(a && b && c)  return true;
        }else {
            return false;
        }
        return false;
    }
};
