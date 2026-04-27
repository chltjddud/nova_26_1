#include <stdio.h>

int main() {
    char message[100];
    int key, choice;

    printf("=== 카이사르 암호 도구 ===\n");
    printf("1. 암호화 하기\n2. 복호화 하기\n선택: ");
    scanf("%d", &choice);

    printf("메시지를 입력하세요 (영문 소문자): ");
    scanf("%s", message);

    printf("키(밀기 정도)를 입력하세요 (1-25): ");
    scanf("%d", &key);

   
    if (choice == 2) key = -key;

    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];


        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + key + 26) % 26 + 'a';
            message[i] = c;
        }
    }

    printf("결과 메시지: %s\n", message);

    return 0;
}