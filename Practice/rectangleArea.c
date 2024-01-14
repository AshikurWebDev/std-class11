#include<stdio.h>
int main() {
    int a ,b;
    float area;
    printf("Enter the length and width: ");
    scanf("%d%d", &a, &b);
    area = a*b;
    printf("Area of reatangle: %.2f%", area);
    return 0;
}