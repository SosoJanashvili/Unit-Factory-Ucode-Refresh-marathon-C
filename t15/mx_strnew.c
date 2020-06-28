#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

char *mx_strnew(const int size) {

    if (size > 0) {

        char *p = malloc(sizeof(char) * size + 1);

        for (int i = 0; i < size + 1; i++) {
            p[i] = '\0';
        }

        return p;
    }

    return NULL;
}

//int main(void) {
//    char *p = mx_strnew(10);
//    printf("%s", p);
//}
