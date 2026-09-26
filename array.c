# include <stdio.h>
int main()
{
    float avg;
    int A[100],i,  n, j,sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }

    avg = (float)sum / n;

    printf("The average of the array elements is: %.2f\n", avg);
    
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
