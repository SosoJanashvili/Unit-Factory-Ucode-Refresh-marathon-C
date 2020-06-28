#include <stdio.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

void mx_swap_elements(char *arg1[], char *arg2[]) {
    char *parg = NULL;
    parg = *arg1;
    *arg1 = *arg2;
    *arg2 = parg;
}

int main(int argc, char **argv) {

    for (int i = 1; i < argc; i++) {

        for (int j = i; j < argc; j++) {

            if (mx_strcmp(argv[i], argv[j]) > 0) {
                mx_swap_elements(&argv[i], &argv[j]);
            }
        }
    }

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

}
