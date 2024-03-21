#include<stdio.h>
#include<string.h>
int main(){
    int a,b;
    int*p;
    int*q;
    p=&a;q=&b;
    printf("ENTER THE LENGTH OF FIRST STRING :");
    scanf("%d",p);
    char arr[a+1];
    printf("ENTER THE STRING :");
    scanf("%s",arr);
    printf("ENTER THE LENGTH OF SECOND STRING :");
    scanf("%d",q);
    char brr[b+1];
    printf("ENTER THE STRING :");
    scanf("%s",brr);
    strcat(arr,brr);
    puts(arr);
    
    
    return 0;
}