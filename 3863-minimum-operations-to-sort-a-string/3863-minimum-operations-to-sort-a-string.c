int minOperations(char* s) {
    int n = strlen(s);
    char max = 'a', min = 'z';
    int sorted = 1;
    for (int i = 0; i < n; i++) {
        if (s[i] > max) {
            max = s[i];
        }
        if (s[i] < min) {
            min = s[i];
        }
        if (i > 0 && s[i - 1] > s[i]) {
            sorted = 0;
        }
    }
    if (sorted) {
        return 0;
    }
    if (n == 2) {
        return -1;
    }
    if (s[0] == min || s[n - 1] == max) {
        return 1;
    }
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == min || s[i] == max) {
            return 2;
        }
    }
    return 3;
}