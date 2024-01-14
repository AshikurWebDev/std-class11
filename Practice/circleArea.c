#include<stdio.h>
int main(){
    int r; 
    float area;
    printf("Enter the valur of radius: ");
    scanf("%d", &r);
    area = 3.1416*r*r;
    if(area == 0){
        printf("Your radius is not correct");
    }else{
        printf("Area of Circle is: %f", area);
    }
    return 0;
}