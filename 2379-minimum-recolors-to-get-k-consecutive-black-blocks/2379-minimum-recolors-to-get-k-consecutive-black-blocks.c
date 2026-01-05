int minimumRecolors(char* blocks, int k) {
    int len = strlen(blocks);
    int min = INT_MAX;
    for(int i=0;i<=len-k;i++)
    {
        int curr = 0;
        for(int j=i;j<i+k;j++)
        {
            if(blocks[j]=='W') curr++;
        }
        if(curr<min) min = curr;
    }
    return min;
}