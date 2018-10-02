/* Hello World program */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[10];

    for(i=1; i<=100; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            strcpy(str, "fizzbuzz");
        else if (i % 3 == 0)
            strcpy(str, "fizz");
        else if (i % 5 == 0)
            strcpy(str, "buzz");
        else
            sprintf(str, "%d", i);

        printf("%s\n", str);
    }

    return 0;
}
