#include<stdio.h>
#include<string.h>
int main(){
    printf("enter a  string: ");
    char s[10000];
    gets(s);
    printf("enter a char to find freq: ");
    char a ;
    fflush(stdin);fflush(stdout);
    scanf("%c",&a);
    int cnt= 0;
    for(int i = 0 ; i < strlen(s);i++){
        if(s[i]==a)cnt++;
    }
     printf("frequency of %c = %d",a,cnt);
}