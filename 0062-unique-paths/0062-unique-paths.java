class Solution {
    public int uniquePaths(int m, int n) {
        int[][] ar = new int[m][n];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) { // Fixed inner loop variable
                if (i == 0 || j == 0) {
                    ar[i][j] = 1; // First row or first column has only one path
                } else {
                    ar[i][j] = ar[i - 1][j] + ar[i][j - 1]; // Sum of paths from top and left
                }
            }
        }
        return ar[m - 1][n - 1]; // Return the number of unique paths for m x n grid
    }
}
