#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Bubble Sort Algorithm
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        // If no swaps were made, array is already sorted
        if (flag == 0)
            break;
    }

    printf("The sorted array is: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");

    return 0;
}
