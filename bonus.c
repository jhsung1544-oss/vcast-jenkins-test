#include "bonus.h"

int calculate_bonus(int years, int score) {
    int bonus = 0;
    if (years >= 10) {
        if (score > 500) {
            bonus = 5000;
        } else {
            bonus = 3000;
        }
    } else if (years >= 5) {
        if (score > 80) {
            bonus = 2000;
        } else {
            bonus = 1000;
        }
    } else {
        if (score > 95) {
            bonus = 500;
        } else {
            bonus = 0;
        }
    }
    return bonus;
}

int get_grade(int score) {
    if (score < 0 || score > 100) {
        return -1;
    }
    switch (score / 10) {
        case 10:
        case 9:
            return 4;
        case 8:
            return 3;
        case 7:
            return 2;
        case 6:
            return 1;
        default:
            return 0;
    }
}
