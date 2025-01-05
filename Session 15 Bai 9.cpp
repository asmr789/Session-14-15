#include <stdio.h>
#include<string.h>

int main() {
    char str[]="Hello world";
    int size=strlen(str);
    char remove;
    printf("Nhap kt can xoa: ");
    scanf("%c",&remove);
    for (int i=0;i<size;i++) {
        if (str[i] == remove) {
            for (int j=i;j<size;j++) {
                str[j]=str[j+1];
            }
        }
    }
    printf("Chuoi da xoa '%c': %s\n",remove,str);

    return 0;
}
