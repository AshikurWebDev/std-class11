#include <stdio.h>
int main() {
    float height, width, area;
    printf("Enter the Height: ");
    scanf("%f", &height);
    printf("Enter the width: ");
    scanf("%f", &width);
    area = .5*height*width;
    printf("Area: %.2f", area);
}