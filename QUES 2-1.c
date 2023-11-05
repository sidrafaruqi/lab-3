#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char a[4] = "cat";
    char *p = a + strlen(a) - 1;

    printf("REVERSE ORDER PRINTING: ");
    for (; p >= a; p--) {
        printf("%c", *p);
    }}
