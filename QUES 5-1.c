#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("Enter the number of columns: ");
    scanf("%d", &b);

    int arra[a][b], arrb[a][b], arrc[a][b];
    int *ptra, *ptrb, *ptrc;


    printf("Enter values for matrix 1:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Row %d and Column %d: ", i + 1, j + 1);
            scanf("%d", &arra[i][j]);
        }
    }


    printf("Enter values for matrix 2:\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("Row %d and Column %d: ", i + 1, j + 1);
            scanf("%d", &arrb[i][j]);
        }
    }

    ptra = &arra[0][0];
    ptrb = &arrb[0][0];
    ptrc = &arrc[0][0];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            *ptrc = *ptra + *ptrb;
            ptra++;
            ptrb++;
            ptrc++;
        }
    }

    printf("Matrix C (Result of Addition):\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%4d ", arrc[i][j]);
        }
        printf("\n");
    }

    return 0;
}


