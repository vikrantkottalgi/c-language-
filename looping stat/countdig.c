#include<stdio.h>
void main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int digit = 0;
    while(n > 0){
        n = n / 10;
        digit++;
    }
    printf("the number of digits in the given number is : %d",digit);
    getch();
}