#include<stdio.h>
void main(){
    int n = 4;
    for(int i = 0; i < n; i){
        for(int j = 0; j < n; j++){
            printf("  ");
        } 
        for(int k = 0; k < n; k++){
            printf(" *");
        }
    }
    getch();
}