int strStr(char* haystack, char* needle) {
    int j=0;
    for(int i=0;i<strlen(haystack);i++){
        if(haystack[i]==needle[j]){
            if(j==(strlen(needle)-1)){
                return i-j;
            }
            else{
                j++;
            }
        }
        else{
            i=i-j;
            j=0;
        }       
    }
    return -1;
}