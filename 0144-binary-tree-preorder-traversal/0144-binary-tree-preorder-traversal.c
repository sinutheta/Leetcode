/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

/**
 * Note: The returned array must be malloc'ed, assume caller calls free().
 */

void preorder(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL)
        return;

    arr[(*index)++] = root->val;     // Visit root
    preorder(root->left, arr, index); // Visit left
    preorder(root->right, arr, index); // Visit right
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int)); // assume max 100 nodes
    *returnSize = 0;
    preorder(root, result, returnSize);
    return result;
}
