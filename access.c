#include "access.h"

int check_access(int age, int is_member, int has_ticket) {
    if (age < 0) {
        return -1;
    }
    if ((age >= 19 && is_member) || has_ticket) {
        return 1;
    }
    return 0;
}

// 신규: 로그인 실패 횟수에 따른 계정 잠금 판단
int check_lockout(int failed_attempts, int is_admin) {
    if (failed_attempts < 0) {
        return -1;          // 잘못된 입력
    }
    if (is_admin) {
        return (failed_attempts >= 3) ? 1 : 0;   // 관리자: 3회부터 잠금
    }
    return (failed_attempts >= 5) ? 1 : 0;       // 일반 사용자: 5회부터 잠금
}
