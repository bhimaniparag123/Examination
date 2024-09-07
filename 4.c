#include <stdio.h>

void squareArray(int *arr, int size) 
{
    for (int i=0;i<size;i++) 
	{
        arr[i]=arr[i]*arr[i];
    }
}

main()
{
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i=0;i<size;i++)
	{
        scanf("%d", &arr[i]);
    }

    squareArray(arr, size);
    printf("Squared elements:\n");
    for (int i=0;i<size;i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
