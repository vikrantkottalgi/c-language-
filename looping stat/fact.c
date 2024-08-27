#include<stdio.h>
void main(){
    int n;
    printf("ente the number:\n");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 0; i <= n; i++){
        fact *= i;
    }
    printf("\n");
    printf("factorial of %d is %d\n",n,fact);
    getch();
}