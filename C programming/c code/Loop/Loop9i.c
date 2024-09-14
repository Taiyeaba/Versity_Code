//i
#include <stdio.h>
int main()
{
    int m=5;
    for (int i = 0; i < m; i++)
    {
        int n = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", n);
            n = n * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
