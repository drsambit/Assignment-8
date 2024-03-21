 #include<stdio.h>

void rightrot(int *mat, int rows, int cols, int n) {
    n = n % 4;
    if (n == 0)
        return;
    int temp[rows][cols];
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int new_i = j;
                int new_j = rows - 1 - i;
                temp[new_i][new_j] = *((mat + i * cols) + j);
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                *((mat + i * cols) + j) = temp[i][j];
            }
        }
    }
}

int main(){
    int n;
    int *p=&n;
    printf("Enter the value of N for N X N matrix :");
    scanf("%d",p);
    int arr[*p][*p];
    int (*q)[*p]=arr;

    for (int i=0;i<(*p);i++){
        for (int j=0;j<(*p);j++){
            printf("ENTER %d,%d element of Matrix :",i+1,j+1);
            scanf("%d",(*(q+i)+j));
        }
        printf("\n");
    }
     printf("INPUT MATRIX :\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         printf("%d ",*(*(q+i)+j));
        }
        printf("\n");
    }
    int b;
    printf("Enter the value of n :");
    scanf("%d",&b);
    int k=b%4;
    rightrot((int*)arr,n,n,k);
    printf("\n");

    printf("MATRIX AFTER RIGHT ROTATION(S) :\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         printf("%d ",*(*(q+i)+j));
        }
        printf("\n");
    }
 return 0;
}
