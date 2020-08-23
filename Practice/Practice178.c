// Write a program to decrypt the string encrypted using encrypt function in problem 6
// decrypt a message
#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1; 
        ptr++;
    }
}
int main(){
    char c[] = "dpnf!up!uijt!sppn";
    decrypt(c);
    printf("Decrypted string is: %s", c);
    return 0;
}