#include <stdio.h>
int main()
{


    int i,j;
    int A[3][3];
    int B[3][3];
    int C[3][3];

    printf("ENTER THE IST MATRIX: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&A[i][j]);
        }
    }

    printf("ENTER THE 2nd MATRIX: \n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&B[i][j]);
        }
    }

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Addition of matix is :\n");

     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",C[i][j]);
        }
        printf("\n");
    }





    return 0;
}
