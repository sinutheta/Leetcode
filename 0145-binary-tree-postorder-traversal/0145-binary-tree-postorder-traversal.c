void postorder(struct TreeNode* root, int* arr, int* index) {
    if (root == NULL)
        return;

    postorder(root->left, arr, index); // Visit left
    postorder(root->right, arr, index); // Visit right
        arr[(*index)++] = root->val;     // Visit root
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int)); // assume max 100 nodes
    *returnSize = 0;
    postorder(root, result, returnSize);
    return result;
}
