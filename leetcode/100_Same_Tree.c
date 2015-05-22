bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) {
        return true;
    } else if(p && q){
        if (p->val != q->val) {
            return false;
        } else {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
    }
    return false;
}

/*
*   Runtime: 1 ms
*/
