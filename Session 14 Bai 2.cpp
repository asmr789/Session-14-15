#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd abcdks";
    int length = strlen(str);
    printf("Chuoi da khai bao la: %s\n", str);
    printf("Cac ky tu chuoi:\n");
    for (int i = 0; i < length; i++) {
        printf("%c ", str[i]);
    }
    printf("\n");

    return 0;
}
