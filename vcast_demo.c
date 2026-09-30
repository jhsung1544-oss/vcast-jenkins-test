#include "vcast_demo.h"

int add(int a, int b) {
    return a + b;
}

float divide(float a, float b) {
    if (b == 0.0f) {
        return -1.0f; // 에러 케이스
    }
    return a / b;
}

int check_range(int value) {
    if (value < 0) {
        return -1;
    } else if (value > 9) {
        return 1;
    } else {
        return 0;
    }
}
