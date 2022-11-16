/**
 * PROBLEM 5: BST Depth
 * WILLIAM LUA
 * MARIAH SALGADO
 */
 
class Solution {
public:
    int maxDepth(TreeNode* root) { // Function maxDepth() that takes in a node of a binary tree. 
        if(!root) return 0; //If the node we take in is a null pointer, then there is no depth, therefore return 0.
        int maxLeft = maxDepth(root->left); //This is the recursive case, assuming that the tree is filled with nodes.
        int maxRight = maxDepth(root->right); //We check the left and right children. 
                                             //These lines recursively call the same function we have to go depth first til bottom of the tree is reached.
        return max(maxLeft, maxRight)+1; //Returns the max height from left and right.
    }
};
