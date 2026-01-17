int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;

    for (int i = 0; i < gridSize; i++) {
        int ind = gridColSize[i] - 1;
        while (ind >= 0 && grid[i][ind] < 0) {
            count++;
            ind--;
        }
    }
    return count;
}