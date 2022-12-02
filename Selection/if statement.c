/*Write a C code to get the age of a student. If age is greater than 18, print "age is greater than 18".
Else if age is less than 18, print "age is less than 18".*/

#include<stdio.h>
int main(){
    // declaring variables
    int age = 0;

    printf("Input age : ");
    scanf("%d",&age);

    // conditions
    if(age > 18 ){
        printf("Your age is greater than 18.");
    }
    else{
        printf("Your age is less than 18.");
    }
}