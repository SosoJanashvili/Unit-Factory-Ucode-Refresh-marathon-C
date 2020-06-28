#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

void swap_elements(char **s1, char **s2) {
    char* temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

int mx_bubble_sort(char **arr, int size) {

    int total_counter = 0;

    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (mx_strcmp(arr[j], arr[j+1]) > 0) {
                swap_elements(&arr[j], &arr[j+1]);
                total_counter++;
            }

    return total_counter;
}

//int main() {
//    char* arr[] = {"abc", "xyz", "ghi", "def"};
//
//    printf("Number of swaps: %d\n", mx_bubble_sort(arr, 4));
//}
