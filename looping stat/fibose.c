#include<stdio.h>
void main(){
    int n;
    printf("Enter the number:\n ");
    scanf("%d",&n);
    int a = 1;
    int b = 1;
    int sum = 2;
    printf("Fibonacci series up to %d:\n",n);
    for(int i = 0; i < n; i++){
        printf("%d\n ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    getch();
}