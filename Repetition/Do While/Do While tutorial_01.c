//Write a C to represent numbers from 1 to 10.

#include<stdio.h>
int main(){
    int count = 1;
    do{
        printf("%d ",count);
        count ++;
    }while(count <= 10);
    return 0;
}