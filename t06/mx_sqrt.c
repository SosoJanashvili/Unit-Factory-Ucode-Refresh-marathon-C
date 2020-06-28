int mx_sqrt(int x) {

    if (x <= 0) return 0;

    double result;

    for (int i = 1; i * i <= x; i++) {

        result = (double)(i * i);

        if ( result == (double)x ) {
            return i;
        }
    }

    return 0;
}
