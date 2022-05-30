/*dowhilefor*/

#include <stdio.h>

int main (void)

{
    char c;
    int i=1;

    for  (i=1;i<9;i++) {
        c = getchar ();
        if (c != '*')
        putchar (c);
        else
        
        continue;
        
    }
    return 0;
}