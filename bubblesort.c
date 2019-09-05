#include <stdio.h>


int main()
{
    int u,n;

   int *arr;
    int temp ,i,round;

    printf("Enter the array size:\n");
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));

    printf("Enter the array:\n");
    for(u=0;u<n;u++)
        scanf("%d", &arr[u] );

    for(round=0;round<n;round++)
    {
        for(i=0;i<n-round;i++)
        {

            if(arr[i]> arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
    }

    for(i=0;i<n;i++)
    {
       printf("%d", arr[i]);
    }






    return 0;
}
