#include<stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >= 18){
        printf("You are eligible for NID card. :)");
    }else{
        printf("Opps! You are not eligible for NID card");
    }
    return 0;
}