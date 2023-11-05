#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;

    printf("ENTER THE NUMBER OF ELEMENTS YOU WANT: ");
    scanf("%d", &a);

    int b[a];

    printf("Enter %d integers: ", a);

    for (int i = 0; i < a; i++) {
        scanf("%d", &b[i]);
    }

    printf("PRINTING: ");

    for (int i = 0; i < a; i++) {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}




