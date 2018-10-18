/* 
 * EclipseCon Europe Che Challenge
 *
 * This program prints the numbers from 1 to 100, with every multiple of 3
 * replaced by "Fizz", and every multiple of 5 replaced by "Buzz". Numbers
 * divisible by both are replaced by "FizzBuzz". Otherwise, the program
 * prints the number.
 *
 * Your mission, if you choose to accept it, is to change this program so that,
 * in addition to the above, it prints "Fizz" for any number which includes a 3,
 * and prints "Buzz" for any number including a 5. After modification, for
 * example, the number 53 should be replaced by "FizzBuzz".
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    char str[10];

    for(i=1; i<=100; i++)
    {
    	int fizz = 0, buzz = 0;
    	if (i%3 == 0){
    		fizz = 1;
    	}
    	if (i%5 == 0){
    		buzz = 1;
    	}

        if (fizz && buzz)
            strcpy(str, "FizzBuzz");
        else if (fizz)
            strcpy(str, "Fizz");
        else if (buzz)
            strcpy(str, "Buzz");
        else
            sprintf(str, "%d", i);

        printf("%s\n", str);
    }

    return 0;
}
