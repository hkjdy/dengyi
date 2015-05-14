bool hasPathSum(struct TreeNode* root, int sum) {
    if (!root) {
        return false;
    }else if (!root->left && !root->right && sum == root->val) {
        return true;
    } else {
        return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum - root->val);
    }

    return false;
}

/*
注意:
[] 0    结果为false
Runtime: 7 ms
*/
