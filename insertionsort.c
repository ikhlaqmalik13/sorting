#include <stdio.h>
int main()
{

    int n,i,j;
    int *arr;
    int temp,idx;


    printf("Enter the size of array: ");
    scanf("%d",&n);

    arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=1;i<n;i++)
    {
       temp = arr[i];
       idx = i;

       while (idx>0 && arr[idx-1]> temp)
       {
           arr[idx] = arr[idx-1];
           idx = idx -1;
       }
       arr[idx] = temp;


    }

    printf("Array in sorted order: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }



    return 0;
}
