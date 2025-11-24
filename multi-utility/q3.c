#include <stdio.h>

int main() {
    int angle1 = 65, angle2 = 45, angle3;

    angle3 = 180 - (angle1 + angle2);
    
    printf("Third Angle = %d\n", angle3);

    return 0;
}
