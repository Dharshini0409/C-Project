#include <stdio.h>

int main()
{
    int i, j, row = 5, col = 5;

    for(i = 1; i <= row; i++)
    {
        /* D */
        for(j = 1; j <= col; j++)
        {
            if(j == 1 || (j == 5 && i != 1 && i != 5) ||
               i == 1 || i == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* H */
        for(j = 1; j <= col; j++)
        {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* A */
        for(j = 1; j <= col; j++)
        {
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* R */
        for(j = 1; j <= col; j++)
        {
            if(j == 1 || i == 1 || i == 3 ||
               (j == 5 && i <= 3) ||
               (i == 4 && j == 4) ||
               (i == 5 && j == 5))
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* S */
        for(j = 1; j <= col; j++)
        {
            if(i == 1 || i == 3 || i == 5 ||
               (j == 1 && i < 3) ||
               (j == 5 && i > 3))
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* H */
        for(j = 1; j <= col; j++)
        {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* I */
        for(j = 1; j <= col; j++)
        {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        /* N */
        for(j = 1; j <= col; j++)
        {
            if(j == 1 || j == 5 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf(" ");
        //i
for(j = 1; j <= col; j++)
        {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }

        printf("  ");

        printf("\n");
    }

    return 0;
    }
