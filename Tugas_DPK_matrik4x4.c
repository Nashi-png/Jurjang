#include <stdio.h>

int main() {
    int A[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int B[4] = {1, 2, 3, 4};
    int C[4] = {0};

    // Proses perkalian
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            C[i] += A[i][j] * B[j];
        }
    }

    // Tampilkan hasil
    printf("Hasil perkalian (4x1):\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\n", C[i]);
    }

    return 0;
}