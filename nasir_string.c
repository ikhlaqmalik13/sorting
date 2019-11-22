#include <stdio.h>
#include <string.h>
int main()
{
    char arr[19];
    int i;
    char ch_r, ch_p;
    int flag =0;

    printf("Enter the string :");
    scanf("%[^\n]%*c", arr);
    printf("Enter the char to be replaced:");
    scanf("%c",&ch_r);
    printf("Enter the char to be placed:");
    scanf(" %c",&ch_p);
    printf("%i",sizeof(arr));

    for(i=0;i<sizeof(arr);i++)
    {

        if(arr[i]==ch_r && flag == 0)
        {
            arr[i] = ch_p;
            flag = 1;

        }
        else if(arr[i]==ch_r && flag== 1)
        {
            arr[i] = ch_p - 32;
            flag =0;
        }
    }

    printf("\n");

    for(i=0;i<sizeof(arr);i++)
    {
        printf("%c", arr[i]);
    }







    return 0;
}
