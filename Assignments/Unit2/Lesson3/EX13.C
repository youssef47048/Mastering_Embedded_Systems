/*C progrm to calc the sum of natural numbers from 1 to n
############################################################3
*/
#include<stdio.h>
int main(){
    printf("Enter a integer: ");
    fflush(stdout);fflush(stdin);
    int n ;
    scanf("%d",&n);
    printf("sum =  %d",n*(n+1)/2);
    return 0;

}