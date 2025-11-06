#include <stdio.h>

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d  x %d = %d\n", n, i, n * i);
    }
    printf("\n");
}

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        printf(" table of %d\n ",i);
        table(i);
    }

    return 0;
}