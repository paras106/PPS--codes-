#include <stdio.h>
int main() {
    int matrix[2][2], sum = 0;
    printf("Enter elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    printf("Sum of matrix elements = %d\n", sum);
    return 0;
}
