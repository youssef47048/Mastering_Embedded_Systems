#include<stdio.h>
#include<string.h>
char s[100];
int main(){
    printf("enter a  string: ");
    
    gets(s);
    int l = strlen(s);
    printf("Reverse string is : ");
    for(int i = l-1; i >= 0 ; i--){
        printf("%c",s[i]) ;
    }
    return  0;
}