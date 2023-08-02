
#include<stdio.h>

int main(){
    int n;
    printf("Enter no of elements :");
     fflush(stdin);fflush(stdout);
      scanf("%d",&n);
       int arr[100];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",arr[i]);
    }
    int num;
     printf("\nEnter the element to be searched :");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num );
     for(int i = 0 ; i < n ; i++){
        if(num == arr[i]);
         printf("\nNumber found at the location = %d",i);
    }
   
    return 0 ;
}