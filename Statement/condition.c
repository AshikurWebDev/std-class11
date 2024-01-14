#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf(" %d", &age);
    if(age > 18){
        printf("You are eligible to NID card");
    }else{
        printf("Oops! you are not eligible for this.");
    }
    return 0;
}