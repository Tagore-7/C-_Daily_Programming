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
    TreeNode *ans = NULL;
    TreeNode *tail = NULL;
public:
    TreeNode* increasingBST(TreeNode* root) {
       if(root == NULL) return NULL;
       if( root -> left != NULL) increasingBST( root -> left);
       if( ans == NULL){
           ans = new TreeNode( root -> val);
           tail = ans;
       }else{
          tail -> right = new TreeNode(root -> val);
          tail  = tail -> right;
       }
       if( root -> right != NULL) increasingBST( root -> right);
       return ans;
    }
    
};
