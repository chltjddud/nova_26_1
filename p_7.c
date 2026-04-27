#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("=== C 언어 사칙연산 계산기 ===\n");
    printf("연산자를 입력하세요 (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("두 개의 숫자를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("오류: 0으로 나눌 수 없습니다.\n");
            }
            break;
        default:
            printf("오류: 잘못된 연산자입니다.\n");
    }

    return 0;
}