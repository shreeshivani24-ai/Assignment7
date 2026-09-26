# include <stdio.h>
int main()
{
int A[100],n, i, data, p, index = p - 1;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements of the array: \n");
for (i = 0; i < n; i++)
{
    scanf("%d", &A[i]);
}
printf("Enter the element to insert: ");
scanf("%d", &data);
printf("Enter the position where you want to insert the element: ");
scanf("%d", &p);
for (i = n; i >= p; i--)
{
    A[i] = A[i - 1];
}
A[p-1] = data;
n = n + 1;
printf("The array after insertion is: \n");

for (i = 0; i < n; i++)
    {
        printf("%d ", A[i]);

    }
return 0;
}
