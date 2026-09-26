# include <stdio.h>
int main()
{
    int A[100], n, i, data, c = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &data);
    for (i = 0; i < n; i++)
    {
        if (A[i] == data)
        {
            c++;
        }
    }
    printf("The element %d appears %d times in the array.\n", data, c);

       return 0;
}