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


//insertion sort algorithm
for(int i=1;i<n;i++)
{
    int temp=a[i];
    int j =i-1;
    while(j>=0 && a[j]>temp)
    {
        a[j+1] =a[j];
        j--;
    }
    a[j+1]=temp;
}


    printf("The sorted array is: ");
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    printf("\n");
}
