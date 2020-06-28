
void mx_printchar(char c);

void mx_print_alphabet(void) {
    for (int i = 'A'; i <='Z'; i++) {
        (i % 2 == 1) ? mx_printchar((char)i) : mx_printchar((char)(i + 32));
    }
    mx_printchar('\n');
}

//int main(void) {
//    mx_print_alphabet();
//}
