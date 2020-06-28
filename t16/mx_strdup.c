#include <stdio.h>
#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {

    char *pdupstr = mx_strnew(mx_strlen(str));
    mx_strcpy(pdupstr, str);

    return pdupstr;
}

//int main(void) {
//    char str1[] = "This is a long message";
//    char *pstr = NULL;
//    pstr = mx_strdup(str1);
//    printf("%s", pstr);
//}
