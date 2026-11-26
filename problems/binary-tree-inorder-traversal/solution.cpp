class Solution {
public:
    vector<int> ans;

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        inorder(root->left);   // Visit left subtree

        ans.push_back(root->val); // Visit root

        inorder(root->right);  // Visit right subtree
    }

    vector<int> inorderTraversal(TreeNode* root) {
        ans.clear();
        inorder(root);
        return ans;
    }
};
