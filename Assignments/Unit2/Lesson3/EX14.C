/*program to find the factorial of n*/

#include<stdio.h>
int main(){
    printf("Enter a integer: ");
    fflush(stdout);fflush(stdin);
    long int n , fact = 1 ;
    scanf("%d",&n);
    if(n<0) printf("ERROR ||| factorial of negative numbers does not exist  " );
    else{
        for(int i = 1 ; i <= n ; i++){
            fact *= i ;
        }
        printf("factorial = %d" , fact);
    }
    return 0;

}