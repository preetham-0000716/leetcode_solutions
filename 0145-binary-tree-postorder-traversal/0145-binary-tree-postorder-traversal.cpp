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

void postorder(vector<int> &b,TreeNode* root){
    if(root == NULL){
        return;
    }

    postorder(b,root->left);
    postorder(b,root->right);
    b.push_back(root->val);
}

    vector<int> postorderTraversal(TreeNode* root) {

        vector<int> c;

        postorder(c,root);

        return c;
        
    }
};