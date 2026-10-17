// Experiment 12: Zigzag (W) Pattern

#include <stdio.h>

#define ROWS 3
#define PEAKS 4

int main(void)
{
    int width = 4 * (PEAKS - 1) + 1;
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < width; c++)
        {
            if ((r == 0 && c % 4 == 0) ||
                (r == 1 && c % 2 == 1) ||
                (r == 2 && c % 4 == 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}