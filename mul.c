#include <stdio.h>
int main()
{
    int i,j,k;
    int m1,m2,n1,n2;
    int A[5][5], B[5][5], C[5][5];
    int sum;


    printf("Enter the order of the first matrix A:");
    scanf("%d%d",&m1,&n1);

    printf("Enter the order of the first matrix b:");
    scanf("%d%d",&m2,&n2);

    if (n1 == m2)
    {
      printf("Enter the matrix A: \n");
      for(i=0;i<m1;i++)
      {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&A[i][j]);
        }

      }


      printf("Enter the matrix B: \n");
      for(i=0;i<m2;i++)
      {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&B[i][j]);
        }

      }

      for(i=0;i<m1;i++)
      {
          sum = 0;
          for(j=0;j<n2;j++)
          {
              for(k=0;k<m2;k++)
              {
                  sum += A[i][k] * B[k][j];
              }
               C[i][j] = sum;
          }

      }

      printf("The matrix multiplication C:\n");

      for(i=0;i<m1;i++)
      {
        for(j=0;j<n2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");

      }






    }
    else
    {
        printf("enter the suitable order of matrix:");
    }



    return 0;
}
