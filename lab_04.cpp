#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    if (x >= -1.0 && x <= 1.0 && y <= 1.0 && y >= x ) {
        printf("Point M(%.2f, %.2f) belongs to the area.\n", x, y);
    }
    else {
        printf("Point M(%.2f, %.2f) does not belong to the area.\n", x, y);
    }
    return 0;
}