#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if (n % 2 == 0) {
        printf("even number");
    }else{
        printf("odd number");
    }
    getch();
}