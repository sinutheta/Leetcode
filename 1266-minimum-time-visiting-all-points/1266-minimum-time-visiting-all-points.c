int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int ans = 0;
    for (int i = 0; i < pointsSize-1; i++) {
        int dx = points[i][0] - points[i + 1][0];
        int dy = points[i][1] - points[i + 1][1];
        if (dx < 0) dx = -dx;
        if (dy < 0) dy = -dy;
        if (dx > dy) {
         ans += dx;
        } else {
        ans += dy;
        }
    }
    return ans;
}
