#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    arr=(int*) malloc(3*sizeof(int));
    arr=(int*) realloc(arr,5*sizeof(int));
    printf("memory resized:");
    free(arr);
    return 0;

}
