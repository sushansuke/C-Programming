#include <stdio.h>

int main() {
    // Define the dimensions of the array
    int rows = 3;
    int cols = 4;

    // Declare and initialize a 2D array (3 rows and 4 columns)
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Outer loop traverses each row
    for (int i = 0; i < rows; i++) {
        
        // Inner loop traverses each column in the current row
        for (int j = 0; j < cols; j++) {
            // Accessing the element at row i, column j
            printf("%d ", matrix[i][j]);
        }
        
        // Print a new line after completing a row for matrix formatting
        printf("\n");
    }

    return 0;
}
