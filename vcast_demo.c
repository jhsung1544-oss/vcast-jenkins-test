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

// ATG가 이 복잡한 조건들을 자동으로 분석합니다.
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

// [추가 1] switch 문 분기 확인용: 점수를 등급(4~0)으로 변환
int get_grade(int score) {
    if (score < 0 || score > 100) {
        return -1;          // 잘못된 점수
    }
    switch (score / 10) {
        case 10:
        case 9:
            return 4;       // A (90~100)
        case 8:
            return 3;       // B (80~89)
        case 7:
            return 2;       // C (70~79)
        case 6:
            return 1;       // D (60~69)
        default:
            return 0;       // F (0~59)
    }
}

// [추가 2] 복합 조건(&&, ||) 확인용: 입장 가능 여부 판단
int check_access(int age, int is_member, int has_ticket) {
    if (age < 0) {
        return -1;          // 잘못된 나이
    }
    if ((age >= 19 && is_member) || has_ticket) {
        return 1;           // 입장 가능
    }
    return 0;               // 입장 불가
}
