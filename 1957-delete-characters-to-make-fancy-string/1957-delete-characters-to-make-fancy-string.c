char* makeFancyString(char* s) {
    int len = strlen(s);
    if (len < 3)
        return s;
    int i, j = 2;
    for (i = 2; i < len; i++) {
        if (s[i] == s[j - 1] && s[i] == s[j - 2])
            continue;
        s[j] = s[i];
        j++;
    }
        s[j] = '\0';
    return s;
}