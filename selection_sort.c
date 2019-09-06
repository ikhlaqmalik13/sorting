#include <stdio.h>
#include <limits.h>

int main()
{
    int  i,j,a,b,temp;
    int *arr;
    int n;
    int min_idx;

    printf("Enter the size of an array: \n");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }




    for(i=0;i<n;i++)
    {
        min_idx = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx = j;

            }
        }
        temp = arr[i];
        arr[i] = arr[min_idx] ;
        arr[min_idx] = temp;
    }


    printf("Array in sorted order: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }





    return 0;
}
