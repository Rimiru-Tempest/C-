//Write a C code to display numbers from 10 to 1.

#include<stdio.h>
int main(){
    int count = 10;
    do{
        printf("%d ",count);
        count --;
    }while(count >= 1);
    return 0;
}