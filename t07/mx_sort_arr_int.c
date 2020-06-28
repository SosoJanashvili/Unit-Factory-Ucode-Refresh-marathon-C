
void mx_sort_arr_int(int *arr, int size) {

   for (int i = 0; i < size; i++) {

       for (int j = i; j < size; j++) {

            if (arr[j] < arr[i]) {
                int x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }

       }
   }
}


/* Driver program to test above function */
//int main(void) {
//
//    int arr[] = {3, 55, -11, 1, 0, 4, 22};
//    mx_sort_arr_int(arr, 7);
//
//    for (int i = 0; i < 7; i++) {
//        printf("%d, ", arr[i]);
//    }
//}
