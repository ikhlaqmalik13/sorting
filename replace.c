#include <stdio.h>
void replace(char str[])
{
    int i=0;
    int length =0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            str[i] = '-';
        }

        i++;
        length++;
    }


    printf("String replaced with - is : ");
    for(i=0;i<length;i++)
    {
        printf("%c", str[i]);
    }

    return;


}
int main()
{
    char str[20];

    printf("Enter the string: \n");
    scanf("%[^\n]", str);

    replace(str);



    return 0;
}
