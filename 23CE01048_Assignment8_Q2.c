#include<stdio.h>
int main(){
    int a,b,c,d;
    t:
    printf("ENTER THE DIMENSIONS OF MATRIX 1 :");
    scanf("%d%d",&a,&b);
    printf("ENTER THE DIMENSIONS OF MATRIX 2 :");
    scanf("%d%d",&c,&d);
    if(b!=c){
        printf("MATRIX CANNOT BE MULTIPLED WITH GIVEN DIMENSIONS\n");
        goto t;
    }
    int arr[a][b],brr[c][d];
    int(*p)[a]=arr,(*q)[c]=brr;
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("ENTER THE ELEMENT %d %d for Matrix 1:",i+1,j+1);
            scanf("%d",(*(p+i))+j);
        }
        printf("\n");
    }
    for (int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("ENTER THE ELEMENT %d %d for Matrix 2:",i+1,j+1);
            scanf("%d",(*(q+i))+j);
        }
        printf("\n");
    }
    int res[a][d];
    int(*l)[a]=res;

    for (int i=0;i<a;i++){
        for (int j=0;j<d;j++){
            int d=0;
            for (int m=0;m<b;m++){
                d+=(*(*(p+i)+m))*(*(*(q+m)+j));
            } 
            *(*(l+i)+j)=d;
        }
    }
    printf("\n");
    printf("Matrix 1 :\n");
    for (int i=0;i<a;i++){
        for(int j=0;j<b;j++){
         printf("%d\t",*(*(l+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    printf("Matrix 2:\n");
    for (int i=0;i<c;i++){
        for(int j=0;j<d;j++){
         printf("%d\t",*(*(l+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    printf("RESULTANT MATRIX IS :\n");
    printf("\n");
    for (int i=0;i<a;i++){
        for(int j=0;j<d;j++){
         printf("%d\t",*(*(l+i)+j));
        }
        printf("\n");
    }
    return 0;
}