#include<stdio.h>

#include<math.h>
int main(){
    /*Finding the area of a triangle with given three arms*/
    int a,b,c;
    float s, area; 
    printf ("Enter the value of three arms: ");
    scanf("%d%d%d", &a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of Triangle: %.2f", area);
    return 0;
}