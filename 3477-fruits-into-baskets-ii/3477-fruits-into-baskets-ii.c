int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int unplaced =0;
   for(int i=0;i<fruitsSize;i++){
    for(int j=0;j<basketsSize;j++){
        if(baskets[j]>=fruits[i]){
            baskets[j] = -1;
            break;
        }
        if(j==basketsSize-1){
            unplaced++;
        }
    }
   }
   return unplaced;
}