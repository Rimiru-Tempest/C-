/* Input two numbers and out the sum */
#include<stdio.h>
int main(){
    // declaring  variables
    int a = 0;
    int b = 0;
    int sum = 0;

    printf("Input number 1 : ");
    scanf("%d",&a);
    printf("Input number 2 : ");
    scanf("%d",&b);

    sum = a + b;

    printf("Sum = %d",sum);

    return 0;
}