/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <string.h>

int main() {
    char hexNum[10];
    printf("User input: ");
    scanf("%s", hexNum);

    printf("Output: ");
    for (int i = 0; i < strlen(hexNum); i++) {
        char c = hexNum[i];
        int num;
        if (c >= '0' && c <= '9') {
            num = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            num = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            num = c - 'a' + 10;
        } else {
            printf("Invalid input.\n");
            return 1;
        }

        for (int j = 3; j >= 0; j--) {
            if (num & (1 << j)) {
                printf("1");
            } else {
                printf("0");
            }
        }
    }
    printf("\n");

    return 0;
}