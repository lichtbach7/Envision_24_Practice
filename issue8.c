// Only print the given string, nothing more
// Bonus if you don't count the number of characters in the string manually

#include<stdio.h>
#include<string.h>
int main(void){
    char* str = "Welcome to IEEE\n";
    char len=strlen(str);
    for(int i=0;i<len;i++){
        printf("%c", str[i]);
    }
    printf("\n");
}