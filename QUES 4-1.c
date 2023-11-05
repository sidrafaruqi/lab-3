#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b, *p;

    printf("ENTER ELEMENT YOU WANT: ");
    scanf("%d", &b);

    for (p = a; p < a + 5; p++) {
        if (*p == b) {
            printf("THE VALUE ADDRESS IS: %p\nTHE VALUE IS: %d\n", (void*)p, *p);
        }
    }

    return 0;
}





