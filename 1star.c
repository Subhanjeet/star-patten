#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if ((i == 3 && j == 1) || (i == 2 && j == 2 )||( i == 1 && j == 3) || j == 4 || i == 7)
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