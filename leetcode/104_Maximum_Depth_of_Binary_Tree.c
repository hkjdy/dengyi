int max(int x, int y) {
    return (x>y) ? x : y;
}

int maxDepth(struct TreeNode* root) {
    if (!root) {
        return 0;
    }
    return 1 + max( maxDepth(root->left),  maxDepth(root->right) );
}

/*
Runtime: 13 ms
*/
