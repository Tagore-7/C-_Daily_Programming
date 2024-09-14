/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
private:
   TreeNode *ans = NULL;    
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(original != NULL && cloned != NULL){if( original -> val == target -> val && cloned -> val == target -> val){         
            cout << original -> val << cloned -> val << target -> val << endl;
            ans = cloned;
            return ans;
            
        }
        if(original -> left != NULL && cloned -> left != NULL){
          ans = getTargetCopy(original -> left,  cloned -> left,  target);}
        if(original -> right != NULL && cloned -> right != NULL){
          ans = getTargetCopy(original -> right,  cloned -> right,  target);}
        }  
       return ans;
    }
};
