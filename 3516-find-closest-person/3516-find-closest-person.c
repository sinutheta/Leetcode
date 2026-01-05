int findClosest(int x, int y, int z) {
    int dist = (x - y) * (x + y - 2 * z);
    return 2 * (dist > 0) + (dist < 0);
}