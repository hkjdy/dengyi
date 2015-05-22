/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 
 int max_depth(int a, int b) {
     return (a>b) ? a : b;
 }
 
 int depth(struct TreeNode *root) {
     if (!root) {
         return -1;
     } else if (!root->left && !root->right) {
         return 0;
     }
     return 1+max_depth(depth(root->left), depth(root->right));
 }
 
bool isBalanced(struct TreeNode* root) {
    if (!root) {
        return true;
    }
    int depth_sub_left = depth(root->left);
    int depth_sub_right = depth(root->right);
    int value = depth_sub_left > depth_sub_right ? depth_sub_left-depth_sub_right : depth_sub_right-depth_sub_left;
    if (value > 1) {
        return false;
    }
    
    return isBalanced(root->left) && isBalanced(root->right);
}

/*
Runtime: 8 ms
*/