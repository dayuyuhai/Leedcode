/*************************************************************************
	> File Name: 669.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 08:49:20 PM CST
 ************************************************************************/

struct TreeNode *delete_tree(struct TreeNode *root, int flag) {
    if (root == NULL) return NULL;
    struct TreeNode *temp = flag ? root->left : root->right;
    free(root);
    return temp;
}

struct TreeNode* trimBST(struct TreeNode* root, int low, int high){
    if (root == NULL) return NULL;
    if (root->val < low) {
        root->right = trimBST(root->right, low, high);
        root = delete_tree(root, 0);
    } else if (root->val > high) {
        root->left = trimBST(root->left, low, high);
        root = delete_tree(root, 1);
    } else {
        root->left = trimBST(root->left, low, high);
        root->right = trimBST(root->right, low, high);
    }
    return root;
}
