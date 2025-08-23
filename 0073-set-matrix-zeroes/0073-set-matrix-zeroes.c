void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize, m = *matrixColSize;
    int row[n], col[m];

    // Initialize markers
    for (int i = 0; i < n; i++) row[i] = 0;
    for (int j = 0; j < m; j++) col[j] = 0;

    // First pass: mark rows & cols
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Second pass: set zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (row[i] || col[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

