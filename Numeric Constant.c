#include <stdio.h>
#define MAXINPUT 100
int main()
{
    char n[MAXINPUT] = "";
    int length,i;

    scanf ("%s", n);
    length = strlen (n);
    for (i=0;i<length; i++)
        if (!isdigit(n[i]))
        {
            printf ("The given value is Not Numeric value\n");
            exit(1);
        }
    printf ("The given value is a Numeric constant value\n");
}

