#include<stdio.h>
void main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int a = 3;
    for(int i = 2; i < n; i){
        if(i % a == 0){
            a++;
            continue;
        }else{
            printf("%d ",a);
            a++;
        }
    }
    getch();
}