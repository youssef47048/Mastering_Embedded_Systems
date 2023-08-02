#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers of data: ");
     fflush(stdin);fflush(stdout);
      scanf("%d;",&n);
       float arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("\nEnter number: " );
        fflush(stdin);fflush(stdout);
        scanf("%f;",&arr[i]);
    }
    float sum = 0.0 ;
     for(int i = 0 ; i < n ; i++){
         sum += arr[i];
    }
    printf("\nAverage = %0.2f" ,sum/n );
   


    return 0 ;
}