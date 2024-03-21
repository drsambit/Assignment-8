#include<stdio.h>
#include<limits.h>
int main(){
    int a;
    printf("Enter the size of array:");
    scanf("%d",&a);
    int ar[a];
    int *p=ar;
    for (int i=0;i<a;i++){
        t:
        printf("Enter %d element lying between[1,%d] :",i+1,a-1);
        scanf("%d",(p+i));
        if(((*(p+i)<=(a-1))&&(*(p+i)>=1))==0){
            printf("Range exceeded\n");
            goto t;
    }
    }
    int br[a];
    int*q=br;
    for ( int i=0;i<a;i++){
        *(q+i)=*(p+i);
    }
    
    for (int i=0;i<a*1;i++){
        for(int j=0;j<a-i-1;j++){
            if(*(q+j)>*(q+j+1)){
                int temp=*(q+j);
                *(q+j)=*(q+j+1);
                *(q+j+1)=temp;
                }
        }
    }
    
    // printf("Input array:\n");
    // for (int i=0;i<a;i++){
    //     printf("%d\t",*(p+i));
    // }
    // printf("\n");
    // printf("Sorted array:\n");
    // for (int i=0;i<a;i++){
    //     printf("%d\t",*(q+i));
    // }
    printf("\n");
    int r=INT_MIN,sum=0;
    printf("Number Repeated is/are :");
    for(int i=0;i<a-1;i++){
        if (*(q+i)==*(q+i+1)){
        sum++;
        if(*(q+i)!=r){
        printf("%d\t",*(q+i));
        r=*(q+i);    
        } 
    }
    }
    if(sum==0) printf("NIL");
    
return 0;
}