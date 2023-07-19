/*EX4:

Write C Program to Multiply two Floating Point Numbers
i should see the Console as following:
##########Console-output###

###########################
Enter two numbers: 2.4
1.1
Product: 2.640000
########################################################################*/
#include<stdio.h>
int main(){
    float n , m;
    printf("Enter two integers: ");
    scanf("%f %f",&n,&m);
    printf("Sum: %f",n*m);

    return 0;
}