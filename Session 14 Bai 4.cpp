#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "abcd abcdef";
    int length = strlen(str);
    printf("Chuoi da khai bao la: %s\n", str);
    printf("Cac ky tu chuoi:\n");
    for (int i=length-1; i>=0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    int count=0;
    char found;
    printf("Nhap vao mot ky tu: ");
    scanf("%c",&found);
    for(int i=0;i<length;i++){
    	if(str[i]==found){
    	count++;
	}
    }
	printf("So lan xuat hien cua %c la %d lan",found,count);
		
    return 0;
}