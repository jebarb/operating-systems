//UNC Honor Pledge: I certify that no unauthorized assistance has been received or
//given in the completion of this work
//James Barbour

#include <stdio.h>

//Once 80 chars are printed, print newline
int checkpos(int pos) {
    if (pos == 80) {
        putchar('\n');
        return 1;
    } else {
        return pos + 1;
    }
}

int  main() {

    //counter for number of characters printed
    int pos = 0;

    while (1) {

        pos = checkpos(pos);
        char c = getchar();

        //replace '%%' with '*'
        if (c == '%') {
            c = getchar();
            if (c == '%') {
                putchar('*');
                continue;
            } else {
                putchar('%');
                pos = checkpos(pos);
            }
        }

        //stop processing upon reaching EOF character
        if (c == EOF) {
            return 0;
        }

        //print space in place of newline or print input char
        c == '\n' ? putchar(' ') : putchar(c);
    }

}
