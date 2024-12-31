#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhao vao mot chuoi: ");
    fgets(str,sizeof(str),stdin);
    printf("Chuoi ban vua nhap la: %s\n", str);
    printf("Do dai cua chuoi: %lu\n", strlen(str));

    return 0;
}



