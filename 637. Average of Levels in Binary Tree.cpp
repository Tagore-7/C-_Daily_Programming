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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>numAvg;
        if(!root) return numAvg;
        queue<TreeNode*> levelNodes;
        levelNodes.push(root);
        while(!levelNodes.empty()){
            int size = levelNodes.size();
            double sum = 0.0;
            for(int i = 0; i < size; i++){
                TreeNode *node = levelNodes.front();
                levelNodes.pop();
                sum += node -> val;
                if(node -> left) levelNodes.push(node -> left);
                if(node -> right) levelNodes.push(node -> right);
            }
            numAvg.push_back(sum / size);
        }
        return numAvg;
    }
};
