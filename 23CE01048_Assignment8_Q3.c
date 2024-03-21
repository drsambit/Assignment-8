#include<stdio.h>
void rev(int*p,int a){
     for (int i=0,j=a-1;i<=j;i++,j--){
        int temp=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=temp;
    }
}
int main(){
    int m;
    printf("ENTER THE SIZE OF THE ARRAY:");
    scanf("%d",&m);
    int a[m];
    int*p=a;

    for (int i=0;i<m;i++){
        printf("Enter %d element :",i+1);
        scanf("%d",(p+i));
    }
    printf("Input Array:\n");
    for (int i=0;i<m;i++){
        printf("%d\t",*(p+i));
    }
    rev(a,m);
    printf("\n");
    printf("Reversed Array:\n");
    for (int i=0;i<m;i++){
        printf("%d\t",*(p+i));
    }
    return 0;

}