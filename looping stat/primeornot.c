#include<stdio.h>
void main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int flag = 0;
    for(int i = 2; i < n; i++){
        if(i % n == 0){
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 0){
        printf("%d is a prime number.", n);
    }else{
        printf("%d is not a prime number.", n);
    }
    getch();
}