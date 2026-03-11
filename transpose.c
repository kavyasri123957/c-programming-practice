#include<stdio.h>
int main()
{
    int arr[10][20], t[10][20];
    int r,c,i,j;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);

    printf("Enter the matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i] = arr[i][j];
        }
    }

    printf("Transpose matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}