//: Print all enum names and integer values using a loop.

#include <stdio.h>

enum TrafficLights {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char *lightNames[] = {"RED", "YELLOW", "GREEN"};

    for (int i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", lightNames[i], i);
    }

    return 0;
}