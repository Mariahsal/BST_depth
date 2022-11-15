/**
 * PROBLEM 1: SEARCH IN A BINARY SEARCH TREE
 * WILLIAM LUA
 * MARIAH SALGADO
 */
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
};

/**
