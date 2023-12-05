#include <stdio.h>

int main() {
int matrix[3][3];
printf("Enter the elements of the 3x3 matrix:\n");
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        scanf("%d", &matrix[i][j]);}
}
printf("The adjoint of the matrix is:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int cofactor = (matrix[(j + 1) % 3][(i + 1) % 3] * matrix[(j + 2) % 3][(i + 2) % 3]) -
                           (matrix[(j + 1) % 3][(i + 2) % 3] * matrix[(j + 2) % 3][(i + 1) % 3]);


int sign = (i + j) % 2 == 0 ? 1 : -1;
printf("%d ", sign * cofactor);}
printf("\n");
}
return 0;
}
