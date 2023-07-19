/*Cprogrma to check whether the character vowel or constant
###############################################
*/
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    switch (a)
    {
    case 'a':
        printf("%c is vowel", a);
        break;
    case 'e':
        printf("%c is vowel", a);
        break;
    case 'i':
        printf("%c is vowel", a);
        break;
    case 'o':
        printf("%c is vowel", a);
        break;
    case 'u':
        printf("%c is vowel", a);
        break;
    default:
        printf("%c is constant", a);
        break;
    }

    return 0;
}