char* removeOuterParentheses(char* s) {
    int x=0, j=0;
    for(int i=0; s[i]!='\0'; i++){
        char c=s[i];
        if(c == '(')
            x++;
        else
            x--;
        if ((x==1 && c=='(')||(x==0 && c==')')) continue;
        s[j++]=s[i];
    }
    s[j]='\0';
    return s;
}