#include <stdio.h>
#include <math.h>
struct point {
    float x;
    float y;
};
float distance(struct point p1, struct point p2) {
    return sqrt((p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y));
}
struct point midpoint(struct point p1, struct point p2) {
    struct point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

float triangleArea(struct point a, struct point b, struct point c) {
    return 0.5 * fabs((a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y)));
}
int main() 
{
    struct point p1, p2, p3, mid;
    printf("Enter coordinates of point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Enter coordinates of point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    printf("Enter coordinates of point 3 (x y): ");
    scanf("%f %f", &p3.x, &p3.y);

    printf("\nDistance between P1 and P2 = %.2f\n", distance(p1, p2));

    mid = midpoint(p1, p2);
    printf("Midpoint of P1 and P2 = (%.2f, %.2f)\n", mid.x, mid.y);

    printf("Area of triangle formed by P1, P2, P3 = %.2f\n", triangleArea(p1, p2, p3));

    return 0;
}
