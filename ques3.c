# include <stdio.h>
float calculatearea(float radius){
    return 3.14*radius*radius;
}
int main(){
    float r, area;
    printf("enter the radius of a cirle");
    scanf("%f", &r);
    area = calculatearea(r);
    printf(" the area of circle is %f", area);
    return 0;
}