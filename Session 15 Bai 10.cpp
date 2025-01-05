#include <stdio.h>
#include <string.h>

int main() {
    char str[]="abcda";
    int size=strlen(str);
    for (int i=0;i<size;i++) {
        int count=0;
        int datim=0;
        for (int j=0;j<i;j++) {
            if (str[i]==str[j]) {
                datim=1;
                break;
            }
        }
        if (datim==0) {
            for (int k=0;k<size;k++) {
                if (str[i]==str[k]) {
                    count++;
                }
            }
            printf("Kt %c xuat hien %d lan\n",str[i],count);
        }
    }
    return 0;
}