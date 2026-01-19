#include <stdbool.h>
#include <string.h>
bool checkRecord(char *s) {
    int a = 0;
    int l = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'L') {
            l++;
        } else {
            l = 0;
        }
        if (a > 1 || l > 2) {
            return false;
        }
    }
    return true;
}