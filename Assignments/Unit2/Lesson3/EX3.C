/*EX3:

Write C Program to Add Two Integers

i should see the Console as following:
##########Console-output###
Enter two integers: 12
11
Sum: 23
###########################

########################################################################*/
#include<stdio.h>
int main(){
    int n , m;
    printf("Enter two integers: ");
    scanf("%d %d",&n,&m);
    printf("Sum: %d",n+m);

    return 0;
}