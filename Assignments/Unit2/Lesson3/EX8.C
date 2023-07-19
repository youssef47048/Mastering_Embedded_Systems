/*C PROGRAM TO CHECK WHETHER THE NUMBER IS EVEN OR ODD*/
#include<stdio.h>
int main(){
    printf("Enter an integer: ");
    fflush(stdout);fflush(stdin);
    int n ;
    scanf("%d",&n);
    printf("Your number is : %s",(n%2 ? "odd":"even"));
    return 0;

}