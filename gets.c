#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
char s[30];
    puts("Give me sentense: ");
    fgets(s, sizeof(s), stdin);
    puts("Thank you for: ");
    puts(s);
}
