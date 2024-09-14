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
       int sum = 0;
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return sum;
        }
        else{
        int root_val = root -> val;
        if( root_val >= low && root_val <= high){
              sum  += root_val; 
        }
        rangeSumBST( root -> left,  low, high);
        rangeSumBST( root -> right,  low, high);
        }
        return sum;
    }
};
