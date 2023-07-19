/*c program to check whether the character alphapet or not
###################################################################
*/

#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='A'&&c<='Z'){
        printf("%c is alphapet ",c);
    }else if(c>='a'&&c<='z'){
        printf("%c is alphapet ",c);   
    }else {
        printf("%c is not alphapet ",c);
    }

    return 0;
}