//Write a C code to represent an algorithm to display numbers from 10 to 1.

#include<stdio.h>
int main(){
    int count = 10;
    while(count >= 1){
        printf("%d ",count);
        count --;
    }
    return 0;
}