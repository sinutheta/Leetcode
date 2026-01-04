/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int checkHeight(struct TreeNode* root) {
    if (root == NULL)
        return 0;

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1)
        return -1; // left subtree not balanced

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1)
        return -1; // right subtree not balanced

    if (abs(leftHeight - rightHeight) > 1)
        return -1; // current node not balanced

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

bool isBalanced(struct TreeNode* root) {
    return checkHeight(root) != -1;
}
