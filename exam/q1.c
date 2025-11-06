#include <stdio.h>

int main()
{

    int i, k, j, n = 5;

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
    for (int i=n; i>=1; i--)
    {
        for (int k=n; k>=i; k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
    

    return 0;
}