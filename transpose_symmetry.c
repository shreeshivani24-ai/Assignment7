#include <stdio.h>

int main()
{
    int a[10][10], transpose[10][10];
    int n, i, j;
    int symmetric = 1, skewSymmetric = 1;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    /* Find transpose */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    printf("\nTranspose of the matrix:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    /* Check symmetric and skew-symmetric */
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                symmetric = 0;

            if(a[i][j] != -a[j][i])
                skewSymmetric = 0;
        }
    }

    if(symmetric)
    {
        printf("\nMatrix is Symmetric.");
    }
    else if(skewSymmetric)
    {
        printf("\nMatrix is Skew-Symmetric.");
    }
    else
    {
        printf("\nMatrix is Neither Symmetric nor Skew-Symmetric.");
    }

    return 0;
}