#include<stdio.h>

int max_value(int arr[], int *size)
{
    int max = arr[0];

    for(int i = 1; i < *size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {1,5,648,56};
    int n = 4;

    int result = max_value(arr, &n);

    printf("Maximum element: %d", result);

    return 0;
}