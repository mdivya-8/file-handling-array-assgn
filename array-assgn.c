1. sec largest and sec smallest in an array
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);   //Accessing the smallest element
    printf("\n");
    printf("The second largest element is %d",a[1]);      //Accessing the largest element
}

2.addition of two 2d arrays.
#include <stdio.h>

int main()
{
    int rowCount, columnCount, i, j;
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];

    printf("Number of rows of matrices to be added : ");
    scanf("%d", &rowCount);

    printf("Number of columns matrices to be added : ");
    scanf("%d", &columnCount);

    printf("Elements of first matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");

    for (i = 0; i < rowCount; i++)
        for (j = 0; j < columnCount; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Sum of entered matrices : \n");

    for (i = 0; i < rowCount; i++)
    {
        for (j = 0; j < columnCount; j++)
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);
        }
        printf("\n");
    }
}
