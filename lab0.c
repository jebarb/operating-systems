#include <stdio.h>

int  main() {
    int pos = 0;
    while (1) {
        if (pos++ == 80) {
            putchar('\n');
            pos = 1;
        }
        char c = getchar();
        if (c == '%') {
            c = getchar();
            if (c == '%') {
                putchar('*');
                continue;
            } else {
                putchar('%');
                pos++;
            }
        }
        if (feof(stdin)) {
            return 0;
        }
        c == '\n' ? putchar(' ') : putchar(c);
    }
}
