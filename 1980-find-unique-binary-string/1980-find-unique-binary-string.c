char ans[100];
char* findDifferentBinaryString(char** nums, int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i][i] == '0') {
            ans[i] = '1';
        } else {
            ans[i] = '0';
        }
    }
    ans[n] = '\0';
    return ans;
}