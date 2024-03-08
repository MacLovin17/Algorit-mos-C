#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char printif[50];
    strcpy(printif, "Hello Word");

    printf("%s", &printif);
    return 0;
}
