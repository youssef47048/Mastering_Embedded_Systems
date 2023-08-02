#include<stdio.h>
int main(){
    float m1[2][2],m2[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f;",&m1[i][j]);
    
        }
    }
    printf("Enter the elements of 2st matrix\n");
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("Enter b%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%f",&m2[i][j]);
           
        }
    }
    printf("Sum of Matrix:\n");
    for(int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%0.1f  ",m1[i][j]+m2[i][j]);           
        }
        printf("\n");
    }
    return 0;
}
/*


*/