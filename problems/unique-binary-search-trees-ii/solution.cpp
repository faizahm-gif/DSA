
class Solution {
public:

    vector<TreeNode*> solve(int start, int end) {

        vector<TreeNode*> ans;

        // Base case: Empty subtree
        if (start > end) {
            ans.push_back(nullptr);
            return ans;
        }

        // Try every number as root
        for (int i = start; i <= end; i++) {

            // Generate left and right subtrees
            vector<TreeNode*> left = solve(start, i - 1);
            vector<TreeNode*> right = solve(i + 1, end);

            // Combine all possible subtrees
            for (auto l : left) {
                for (auto r : right) {

                    TreeNode* root = new TreeNode(i);

                    root->left = l;
                    root->right = r;

                    ans.push_back(root);
                }
            }
        }

        return ans;
    }

    vector<TreeNode*> generateTrees(int n) {
        return solve(1, n);
    }
};
