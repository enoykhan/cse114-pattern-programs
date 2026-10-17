// Experiment 6: Pascal's Triangle

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * (n - 1 - i); j++)
            printf(" ");

        long long c = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%4lld", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}