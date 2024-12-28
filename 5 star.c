#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 || i == 7 || i == 2 && j == 1 || i == 3 && j == 1 || i == 4 || i == 5 && j == 7 || i == 6 && j == 7)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}