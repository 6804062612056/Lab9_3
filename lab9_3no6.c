/*
 * C Program to Remove all Characters in Second String which are 
 * present in First String 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    char str1[100], str2[100], str_rem[100];
    int i = 0, j = 0, k = 0,count;

    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);

    printf ("Enter the Second string:\n");
    gets (str2);

    for (i = 0; str1[i]!= '\0'; i++) {
        count = 0;
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                count++;
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
        if (count > 0) {
            printf("%c remove : %d\n",str1[i],count);
        }
        else {
            printf("%c not found\n",str1[i]);
        }
        
    }

    printf ("On removing characters from second string we get: %s\n", str_rem);

    return 0;
}