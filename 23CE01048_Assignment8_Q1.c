#include<stdio.h>
void cycle(int arr[],int a){
    int *ptr=arr;
    int temp=*(ptr+a-1);
    for(int i=a-1;i>=1;i--){
        *(ptr+i)=*(ptr+i-1);
    }
    *ptr=temp;
    return; 
     
}
int main(){
    int arr[3];
    int *p=arr;
    int *q=arr;
    for (int i=0;i<3;i++){
        printf("Enter the value of variable %d :",i+1);
        scanf("%d",(p+i));
    }

    printf("%d\t",*p);
    printf("%d\t",*(p+1));
    printf("%d\t",*(p+2));
    cycle(arr,3);
    printf("\n");
    printf("%d\t",*p);
    printf("%d\t",*(p+1));
    printf("%d\t",*(p+2));


    return 0;

}

