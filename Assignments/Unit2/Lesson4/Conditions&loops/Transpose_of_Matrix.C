#include<stdio.h>
int main(){
    printf("Enter the rows of matrix\n");
    int n,m;
    fflush(stdin);fflush(stdout);
    scanf("%d %d;",&n,&m );
    int arr[n][m];

     for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("Enter a%d%d: ",i+1,j+1);
            fflush(stdin);fflush(stdout);
            scanf("%d;",&arr[i][j]);
        }
    }
     printf("Entered  matrix:\n");
     for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            printf("%d  ",arr[i][j]);
            
        }
        printf("\n");
    }
    printf("Transpose of matrix:\n");
     for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d  ",arr[j][i]);
            
        }
        printf("\n");
    }
}