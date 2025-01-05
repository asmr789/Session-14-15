#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "hello world";
    int count = 1;
    int size=strlen(str);
    for (int i = 0; i<size; i++) {
        if (str[i] == ' ') {
            count = 1;
        } else if (count == 1) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            count = 0;
        }
    }
    printf("Chuoi sau khi viet hoa: %s\n", str);
    return 0;
}
