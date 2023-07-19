/* check whether the number is positive or negative or zero
##############################################################
*/
#include<stdio.h>
int main(){
    printf("Enter a integer: ");
    fflush(stdout);fflush(stdin);
    float n ;
    scanf("%f",&n);
    if(n == 0)printf("You entered: %f",n);
    else if(n<0)printf("%f is negative ",n);
    else printf("%f is positive ",n);
    return 0;

}