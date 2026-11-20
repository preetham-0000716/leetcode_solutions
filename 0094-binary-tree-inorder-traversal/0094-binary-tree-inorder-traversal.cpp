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


    void inOrder(vector<int> &b,TreeNode* root){
            if(root == NULL){
                return;
            }
            
            inOrder(b,root->left);
            b.push_back(root->val);
            inOrder(b,root->right);
        }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> b;

        inOrder(b,root);
        return b;


    }
  
};