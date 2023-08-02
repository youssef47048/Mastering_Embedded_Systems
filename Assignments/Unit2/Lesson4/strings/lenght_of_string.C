#include<stdio.h>
char s[10000];
int main(){
    printf("enter a  string: ");
    
    gets(s);

    int cnt = 0;
    while(s[cnt]!=0){
        cnt++;
    }
    printf("Lenght of string: %d",cnt);
    return  0;
}