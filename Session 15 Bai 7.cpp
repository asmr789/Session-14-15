#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[] = "Hello my gmail is test123@gmail.com";
    int character = 0, numbers = 0, special = 0;
    int size=strlen(str);
//    for (int i = 0; str[i] != '\0'; i++) {
//        if (isalpha(str[i])) {
//            character++;
//        } else if (isalnum(str[i])) {
//            numbers++;
//        } else {
//            special++;
//        }
//    }
 	for(int i=0;i<size;i++){
 		if(str[i] >='A' && str[i] <='Z'|| str[i] >='a' && str[i] <='z'){
 			character++;
		 }
		else if(str[i] >='0' && str[i] <='9'){
			numbers++;
		}
		else{
			special++;
		} 
	 }
    
    printf("So ky tu la chu cai: %d\n", character);
    printf("So ky tu la chu so: %d\n", numbers);
    printf("So ky tu dac biet: %d\n", special);
    
    return 0;
}
