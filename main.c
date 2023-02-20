#include <math.h>
#include <stdio.h>

int main() {
    int i=0;
    int j=0;
    int N = 0;
    float A[50][50];
    float B[50][50];
    do{  printf("Enter row and column length:\n");
        scanf("%d", &N);
    }while(N<1 || N>50);
    
               
    printf("Enter the elements of the array:\n");
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
        scanf("%f", &A[i][j]); }
    }
    
    B[N-1][N-1]=A[N-1][N-1];
    for (int j=N-2; j>=0; j--){
     B[N-1][j]=B[N-1][j+1]+A[N-1][j];
    }
    
    for (i=N-2; i>=0; i--){
        B[i][N-1]=B[i+1][N-1]+A[i][N-1];
        for (j=N-2; j>=0; j--){
            B[i][j]=B[i+1][j]+B[i][j+1]-B[i+1][j+1]+A[i][j];
    }
    
    }
    for ( i = 0; i < N; i++ ) {
    for ( j = 0; j < N; j++ )
    {
        printf( "[%d][%d]=%4.1f ", i, j, B[i][j] );
    }
    printf( "\n" );
  }

}
