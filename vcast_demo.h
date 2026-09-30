#ifndef VCAST_DEMO_H
#define VCAST_DEMO_H

// 간단한 더하기 함수
int add(int a, int b);

// 나눗셈 함수 (0으로 나누기 예외 처리 포함)
float divide(float a, float b);

// 범위 체크 함수 (Branch Coverage 확인용)
int check_range(int value);

#endif
