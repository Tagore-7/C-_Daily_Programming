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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isMirror(root -> left, root -> right);
    }

    bool isMirror(TreeNode *lefttree, TreeNode *righttree){
        if(!lefttree && !righttree) return true;
        if(!lefttree || !righttree) return false;
        return (lefttree -> val == righttree -> val) && isMirror( lefttree -> left , righttree -> right) && isMirror( lefttree -> right , righttree -> left);
    }
};
