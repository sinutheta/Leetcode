bool match(char* s, char* p) {
    if (s[0] == '\0') return false;
    return (s[0] == p[0]) || (p[0] == '.');
}
bool isMatch(char* s, char* p) {
    if (p[0] == '\0') {
        return s[0] == '\0';
    }
    bool firstMatch = (s[0] != '\0') &&  (s[0] == p[0] || p[0] == '.');
    if (p[1] == '*') {
        return isMatch(s, p + 2) || (firstMatch && isMatch(s + 1, p));
    } 
    else {
        return firstMatch && isMatch(s + 1, p + 1);}
}
