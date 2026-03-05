int minOperations(char* s) {
    int start0 = 0, start1 = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != (i % 2 == 0 ? '0' : '1'))
            start0++;
        if (s[i] != (i % 2 == 0 ? '1' : '0'))
            start1++;
    }
    return start0 < start1 ? start0 : start1;
}