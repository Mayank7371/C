#include<stdio.h>
int main(){
    // int char double float
    int age = 24;
    printf("%d\n",age);
    char first = 'l';
    printf("%c\n", first);
    char name[]="mayank";
    printf("%s\n", name);

    return 0;
}



// notes
// when we have an int of 4 bytes meaning 32 bits 2 bit is assigned for + or - number (1 for + and 0 for -)
//  so there are 31 bits remaining.
// size of character is 1 byte