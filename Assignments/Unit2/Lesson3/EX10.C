/*Find the largest number among three numbers
##########################################3
*/

#include<stdio.h>
int main(){
    float n , m ,k;
    printf("Enter three integers: ");
    scanf("%f %f %f",&n,&m,&k);
    
    if (n>m)
    {
        if(n>k) printf("largest number is : %f",n);
         
    }else{
        if(m>k)  printf("largest number is : %f",m);
        else  printf("largest number is : %f",k);
    }
    
    return 0;
}