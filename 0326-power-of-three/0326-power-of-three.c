bool isPowerOfThree(int n) {
    if(n<1) return false;
    for(int i=0;pow(3,i)<=n;i++) {
        if(pow(3,i)==n) return true;
    }
    return false;
}