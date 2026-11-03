#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    int n;
    scanf("%d", &n);

    enum TrafficLight light = n;

    switch (light) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid");
    }

    return 0;
}