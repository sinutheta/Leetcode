int strStr(char* haystack, char* needle) {
    if (needle[0]=='\0') 
{ return 0; }
int haylen= strlen(haystack) ;
int needlen= strlen(needle) ;
if (needlen> haylen) {return -1; }
for (int i=0; i<=haylen-needlen; i++) {
    int j=0;
    while (j< needlen && haystack[i+j] == needle[j])
    {
        j++ ;
    } if (j== needlen)
    { return i;}
}
return -1;
}