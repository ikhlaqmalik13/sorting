#include <stdio.h>
#include <string.h>
int main()
{

    char str[100];
    int i;
    int length = 0;
    int whitespaces =0;
    int vowels =0;

    printf("Enter the  string :\n");
    scanf("%[^\n]", str);

    printf("Entered string is :");
    i = 0;
    while(str[i] !='\0')
    {
        printf("%c",str[i]);
        if (str[i]==' ')
        {
            whitespaces++;
        }

        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            vowels++;
        }
        length++;
        i++;
    }

    printf("\nlength of str is : %d\n", length);

    for(i=length;i>=0;i--)
    {
        printf("%c",str[i]);
    }

    printf("\nnumber of whitespaces are: %d",whitespaces);
     printf("\nnumber of vowels are: %d",vowels);





    return 0;
}
