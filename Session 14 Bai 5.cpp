#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap chuoi ki tu: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    if (length > 0) {
        count++;
    }
    printf("So tu trong chuoi: %d\n", count);

    return 0;
}
