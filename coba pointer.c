#include <stdio.h>

int main(){
    char hrf = 'A';
    char *X = &hrf;
    printf("%c\n", *X);
    printf("%x\n\n", X);

    int a = 30;
    int *b = &a;
    printf("%x", b);

 
}