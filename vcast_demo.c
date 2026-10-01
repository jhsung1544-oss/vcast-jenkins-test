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
    } else if (value > 200) {
        return 1;
    } else {
        return 0;
    }
}

// [새로 추가된 함수] ATG가 이 복잡한 조건들을 자동으로 분석합니다.
int calculate_bonus(int years, int score) {
    int bonus = 0;
    if (years >= 10) {
        if (score > 90) {
            bonus = 5000; // 10년 이상, 점수 90 초과
        } else {
            bonus = 3000; // 10년 이상, 점수 90 이하
        }
    } else if (years >= 5) {
        if (score > 80) {
            bonus = 2000; // 5년 이상, 점수 80 초과
        } else {
            bonus = 1000; // 5년 이상, 점수 80 이하
        }
    } else {
        if (score > 95) {
            bonus = 500;  // 5년 미만, 점수 95 초과
        } else {
            bonus = 0;    // 5년 미만, 점수 95 이하
        }
    }
    return bonus;
}
