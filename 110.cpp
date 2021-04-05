/*************************************************************************
	> File Name: 110.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 15 Mar 2021 08:48:22 PM CST
 ************************************************************************/

int isbalanced(struct TreeNode *root) {
    if (root == NULL) return 0;
    int left = isbalanced(root->left);
    if (left == -1) return -1;
    int right = isbalanced(root->right);
    if (right == -1) return -1;
    return (abs(right - left) > 1) ? -1 : (MAX(left, right) + 1);
}

bool isBalanced(struct TreeNode* root){
    return isbalanced(root) != -1;
}
