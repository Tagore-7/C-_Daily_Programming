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
    vector<int>p;
    vector<int>q;
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        findLeaf(root1, p);
        findLeaf(root2, q);
        return p == q;
    }

    void findLeaf(TreeNode *root, vector<int>&x){
        if(!root){
            return;
        }

        if(!root -> left && !root -> right){
            x.push_back(root ->val);
        }

        findLeaf(root -> left, x);
        findLeaf(root -> right, x);
    }
};
